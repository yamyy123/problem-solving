#include<stdio.h>
void replace_ele(int no_ele,long long int arr[])
{ 
  long long int arr1[no_ele];
  for(int i=0;i<no_ele;i++)
  {
    arr1[i]=arr[i];
  }
   for(int i=0;i<no_ele;i++)
   {
     int sum=0;
     for(int j=0;j<no_ele;j++)
     {
       if(i==j)
       {
         continue;
       }
       sum=sum+arr1[j];
     }
     arr[i]=sum;
   }
   for(int i=0;i<no_ele;i++)
   {
     printf("%lld ",arr[i]);
   }
}
int main()
{
int no_ele,index;
scanf("%d",&no_ele);
long long int arr[no_ele];
for(index=0;index<no_ele;index++)
scanf("%lld",&arr[index]);
replace_ele(no_ele,arr);
return 0;
}
