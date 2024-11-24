#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int rem,rev=0,t=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==t)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}
