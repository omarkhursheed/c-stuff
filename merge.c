#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node * next;
};
struct node * head = NULL;
struct node * curr = NULL;
struct node * curr1 = NULL;
struct node * first = NULL;
struct node * first1 = NULL;
struct node * temp3 = NULL;
struct node * temp1 = NULL;
struct node * temp2 = NULL;
struct node * temp4 = NULL;
char affirm;
char affirm1;
void create();
void create1();
void display();
void display1();
void merge();
int n, k, i;
int main(int argc, char const *argv[])
{
  create();
  display();
  printf("\n\n\n\n");
  create1();
  display1();
  printf("Merge\n");
  merge();
  temp1 = first;
  while (temp1 != NULL)
  {
    printf("%d\n", temp1 -> data);
    temp1 = temp1 -> next;
  }

  return 0;
}
void create()
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
    scanf("%s", &affirm);
    getchar();
  }while(affirm == 'y');
}

void display()
{
  for (curr = first; curr!= NULL; curr = curr->next)
  {
    printf("%d\n",curr -> data);
  }
}
void display1()
{
  for (curr = first1; curr!= NULL; curr = curr->next)
  {
    printf("%d\n",curr -> data);
  }
}

void create1()
{
  do
  {
    head = (struct node *)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d", &head->data);

    if (first1 == NULL)
    {
      first1 = head;
      curr1 = head;
    }
    else
    {
      curr1 -> next = head;
      curr1 = head;
    }
    printf("Do you want to enter another value?\n");
    scanf("%s", &affirm1);
    getchar();
  }while(affirm1 == 'y');
}

void merge()
{
 curr = first;
 curr1 = first1;
 temp1 = first;
 temp2 = first1;
 while (temp1 != NULL && temp2 != NULL)
 {
  temp1 = curr -> next;
  temp2 = curr1 -> next;
  curr -> next = curr1;
  curr1 -> next = temp1;
  curr = temp1;
  curr1 = temp2;
 }
}
