#include<stdio.h>
int main()
{
    int temp,sqr,c=1,n;
    scanf("%d",&n);
    temp=n;
    sqr=n*n;
    while(n!=0)
    {
        c*=10;
        n/=10;
    }
    if(sqr%c==temp)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}