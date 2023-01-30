#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],temp;
    scanf("%s",s);
    int i,j,num=0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='0' && s[i]<='9' )
        {
            temp=s[i-1];
            while(s[i]>='0' && s[i]<='9')
            {
                num=(num*10)+(s[i]-48);
                i++;
            }
            
            for(j=0;j<num;j++)
            {
                printf("%c",temp);
            }
            num=0;
        }
    }
    return 0;
}

