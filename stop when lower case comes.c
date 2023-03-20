#include<stdio.h>
#include<string.h>
int main()
{
  char a[1000];
  scanf("%[^\na-z]",a);
  printf("%s",a);
  return 0;
}
