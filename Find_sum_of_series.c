#include<stdio.h>
int main()
{
    int n,i;
    float sum=0,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=1/(i*1.0);
        sum=sum+a;
    }
    printf("%.2f",sum);
    return 0;
}