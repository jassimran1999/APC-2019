#include<stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    int a[n];
    int b = n;
    //printf("%d",n);
    for(int ii=0;ii<=n-1;ii++)
    {
        int get=0;
        scanf("%d",&get);
        a[ii]=get;
    }
    int max=a[0];
    int max2=a[0];
    int i=0;
    while(i<b)
    {
        if(a[i]>max)
        {
            max2=max;
            max=a[i];
        }
        else if(a[i]>max2 && max!=a[i])
        {
            max2=a[i];
        }
        i++;
    }
    printf("%d",max2);

}


