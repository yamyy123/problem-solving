#include<stdio.h>
int main()
{
  long long int a;
  scanf("%lld",&a);
  long long int temp;
 long long int b[a];
 long long int p1,p2,i;
  
  for( i=0;i<a;i++)
  {
    scanf("%lld",&b[i]);
  }
  scanf("%lld %lld",&p1,&p2);
    if(a<=p1 || a<=p2)
    {
        printf("Invalid");
    }
    else
    {
      temp=b[p1];
      b[p1]=b[p2];
      b[p2]=temp;
    
     for( i=0;i<a;i++)
     {
       printf("%lld",b[i]);
     }
   }
  return 0;
}
