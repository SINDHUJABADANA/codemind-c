#include<stdio.h>
int main()
{
    int N,ce=0,co=0;
    scanf("%d",&N);
    int arr[N],i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++)
    {
        if(arr[i]%2==0)
        {
            ce=ce+1;
        }
        else
        {
            co=co+1;
        }
    }
    printf("%d %d",ce,co);
}