#include<stdio.h>
int main()
{
    int n,i,k,sum=0,rem;
    scanf("%d",&n);
    k=n;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem;
    }
    if(k%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}