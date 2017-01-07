#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node * next;
};
    char check;

struct node * first = NULL;
struct node * curr = NULL;
struct node * head = NULL;
struct node * next1 = NULL;
struct node * prev = NULL;
int main(int argc, char const *argv[])
{
  do
  {
    head = (struct node *)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d", &head->data);

    if (first == NULL)
    {
      first = head;
      curr = head;
    }
    else
    {
      curr -> next = head;
      curr = head;
    }
    printf("Do you want to enter another value?\n");
    scanf("%s", &check);
    getchar();
  }while(check == 'y');
  printf("Linked list:\n");
  for (curr = first; curr != NULL; curr = curr -> next)
  {
    printf("%d\n",curr -> data);
  }
  //REVERSAL
  curr = first;
  while(curr != NULL)
  {
    next1 = curr -> next;
    curr -> next = prev;
    prev = curr;
    curr = next1;
  }
  first = prev;
  for (curr = first; curr != NULL; curr = curr -> next)
  {
    printf("%d\n",curr -> data);
  }

  return 0;
}