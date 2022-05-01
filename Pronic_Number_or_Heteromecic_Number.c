#include<stdio.h>
int main()
{
    int num,i,flag=0;
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        if(i*(i+1)==num)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}