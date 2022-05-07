#include<stdio.h>
int main()
{
    long long int  num;
    scanf("%lld",&num);
    if(num>=1000000000 && num<=9999999999)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}