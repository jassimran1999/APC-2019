#include<stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    printf("%d",recursion(n,0));
}

int recursion(int x,int i)
{
    if(x<10)
    {
        int k= x+i;
        return k;
    }

    else
    {
        int c= x%10;
        x=x/10;
        i+=c;
        int k = recursion(x,i);
        return k;

    }
    
}