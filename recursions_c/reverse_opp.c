#include<stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
printf("%d",rec(n));
}

int rec(int x)
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
        int k = rec(x);
        v=v*10;
        k=k+(c*v);
        return k;
    }
}