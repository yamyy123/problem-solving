#include<stdio.h>
int main()
{
  long long int a,b,next;
 long long  int n;
  scanf("%lld",&n);
  a=0;
  b=1;
  printf("%lld,%lld,",a,b);
  next=a+b;
  for(long long int i=3;i<n;i++)
  {
      printf("%lld,",next);
      a=b;
      b=next;
      next=a+b;
  }
  return 0;
}
