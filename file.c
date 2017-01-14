#include<stdio.h>
int main(int argc, char const *argv[])
{
  FILE *fp;
  int n[10]={0};
  int n2[10]={0};
  int n3[10]={0};
  int i = 0;
  fp = fopen("filer.txt","r");
  while(!feof(fp))
{
  fscanf(fp,"%d %d %d\n", &n[i], &n2[i], &n3[i]);
  i++;
 }
 n[i]='\0';
 n2[i]='\0';
 n3[i]='\0';
 int k = 0;
  fclose(fp);
  while(n[k]!='\0')
{
  printf("%d\n",n[k]);
  printf("%d\n",n2[k]);
  printf("%d\n",n3[k]);
  k++;
}  
  
  return 0;
}