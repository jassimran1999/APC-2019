#include<stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    printf("%d",rev(n,0));
}

int rev(int x,int i)
{
    if(x<10)
    {
        int r = (i*10)+x;
        return r;
    }

    else
    {
        int c = x%10;
        x=x/10;
        i=(i*10)+c;
        int r = rev(x,i);
        return r;
    }
}
