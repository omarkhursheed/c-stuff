#include<iostream>
using namespace std;
int main()
{
  int a[] = {2, 4, 6, 12, 3, 8, 7, 9,};
  int i;
  int key;
  for (int j = 1; a[j] != '\0'; j++)
  {
    key = a[j];
    i = j - 1;
    while(i > 0 && a[i] > key)
    {
      a[i + 1] = a[i];
      i = i - 1;
    }
    a[i + 1] = key;
  }
  for (int k = 0; a[k] != '\0'; k++)
  {
    cout << a[k];
  }
  return 0;
}