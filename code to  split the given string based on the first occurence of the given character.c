#include<stdio.h>
int main()
{
  char a[10000];
  char b[10000];
  char c[10000];
  char d;
  int i,j;
  int k=0,l=0;
  scanf("%[^\n]\n",a);
  scanf("%c",&d);
  for(i=0;a[i]!='\0';i++,k++)
  {
    if(a[i]==d)
    {
      b[k]=a[i];
      for(j=i+1;a[j]!='\0';j++,l++)
      {
        c[l]=a[j];
      }
      break;
    }
   else
      b[k]=a[i];
     

    
  }
  printf("%s\n%s",b,c);
  return 0;
}
