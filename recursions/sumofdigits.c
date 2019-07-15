#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",recc(n));

}

int recc(int x)
{
    if(x<10)
    {
        return x;
    }

    else
    {
        int c=x%10;
        x=x/10;
        return c+recc(x);
    }
    
}