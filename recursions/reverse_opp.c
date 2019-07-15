#include<stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
printf("%d",rec(n));
}

int rec(int x,int i)
{
    static int v=1;
    if (x<10)
    {
        return x;
    }

    else
    {
        int c = x%10;
        x=x/10;
        int i = (i)+(c*v);
        v=v*10;
        printf("%d\n",v);
        int k = rec(x,i);
        
        return k;
    }
}