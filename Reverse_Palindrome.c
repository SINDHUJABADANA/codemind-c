#include<stdio.h>
int reverse(int a)
  {
    int rem,rev=0;
    while(a>0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    return rev;
  }
  int main()
  {
      int x;
      scanf("%d",&x);
      do
      {
          x+=reverse(x);
      }while(x!=reverse(x));
      printf("%d",x);
  }