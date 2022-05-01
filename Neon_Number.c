#include<stdio.h>
int main()
{
    int num,rem,sqr,sum=0;
    scanf("%d",&num);
    sqr=num*num;
    while(sqr!=0)
    {
        rem=sqr%10;
        sum=sum+rem;
        sqr=sqr/10;
    }
    if(num==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}