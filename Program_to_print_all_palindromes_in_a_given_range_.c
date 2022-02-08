#include<stdio.h>
int reverse(int num)
{
    int rem,rev=0;
    while(num>0)
    {
       rem=num%10;
       rev=rev*10+rem;
       num=num/10;
    }
    return rev;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int i;
    for(i=x;i<y;i++)
    {
        if(reverse(i)==i)
        {
            printf("%d ",i);
        }
    }
}