#include<stdio.h>
int main()
{
    int num,rem,sum=0,pro=1,sub;
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        sum=sum+rem;
        pro=pro*rem;
    }
    sub=pro-sum;
    printf("%d",sub);
}