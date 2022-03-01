#include<stdio.h>
#include<limits.h>
int main()
{
    int size,a,b,min=INT_MAX;
    scanf("%d",&size);
    int arr[size],i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<size;i++)
    {
        if((arr[i]<a || arr[i]>b) && arr[i]<min)
        min=arr[i];
    }
    if(min==INT_MAX)
    printf("-1");
    else
    printf("%d",min);
}