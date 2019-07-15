#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int g = rec(n);
    printf("%d\n",g);
}

int rec(int x)
{
    if(x<=1)
    {
        return 1;
    }
    else
    {
        return x*rec(x-1);
    }
}