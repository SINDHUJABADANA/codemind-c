#include<stdio.h>
int main()
{
    int num,rem,l=0;
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        if(rem>l)
        l=rem;
    }
    printf("%d",l);
}