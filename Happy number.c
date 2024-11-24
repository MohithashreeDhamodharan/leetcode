#include <stdio.h>  
int happy(int n)
{  
    int rem=0, sum=0;  
    while(n > 0)
    {  
        rem=n%10;  
        sum+=(rem*rem);  
        n=n/10;  
    }  
    return sum;  
}  
      
int main()  
{  
    int n;
    scanf("%d",&n);
    int res=n;  
      
    while(res!=1 && res!=4)
    {  
        res=happy(res);  
    }  
    if(res==1)  
        printf("%d is a happy number", n);  
    else if(res==4)  
        printf("%d is not a happy number", n);   
   
    return 0;  
}  
