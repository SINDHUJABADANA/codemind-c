#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,rem,sum=0,temp;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=a[i];
        sum=0;
        while(a[i])
        {
            rem=a[i]%10;
            sum=sum*10+rem;
            a[i]=a[i]/10;
        }
        if(temp==sum)
        printf("True
");
        else
        printf("False
");
    }
}