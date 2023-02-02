//to check whether the given program is 2 power or not without using for loop

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n&&(n&(n-1))==0)
    {
        printf("2 power");
    }
    else{
        printf("Not 2 power");
    }
    

    return 0;
}
