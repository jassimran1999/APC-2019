#include<stdio.h>

void rec(int,int);
int main()
{
    int n;
    scanf("%d",&n);
rec(n,2);
return 0;
}

void rec(int x, int i)
{
    static int flag=0;
if(x<=1)
{
    return;
}
else{
    if(x%i==0)
    {
        
        
          if(flag==0)
    {
        printf("%d ",i);
        
    }
    flag=1;
    rec(x/i,i);
    
    }
    else
    {
      
        flag=0;
        rec(x,++i);
        
        
    }
    
}
}