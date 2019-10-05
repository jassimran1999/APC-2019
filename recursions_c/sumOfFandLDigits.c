#include<stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    printf("%d",recc(n,0,0));
}

int recc(int x,int i,int f)
{
    if(x<0)
        return -1;
    else if(x<=9)
    {
        return x+i;
    }

    else
    {
        int c= x%10;
        x=x/10;

        if(f==0)
        {
            i=c;
            x=x/10;
            f=1;
        }
        return recc(x,i,f);
    }
}
