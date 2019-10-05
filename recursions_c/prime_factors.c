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
if(x<2)
{
    return;
}
else{
    if(x%i==0)
    {
        printf("%d ",i);
        rec(x/i,i);
    }
    else
    {
        rec(x,++i);
    }
    
}
}
