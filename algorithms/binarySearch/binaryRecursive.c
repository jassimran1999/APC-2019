#include<stdio.h>

int binary(int*,int,int,int);

int main(){

    int n = 0;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int g;
    scanf("%d",&g);
    printf("%d",binary(arr,0,n,g));
}

int binary(int arr[],int l,int r,int k)
{
    if(l<=r)
    {
        int m = (l+r)/2;
        if(arr[m]==k)
        {
            return m;
        }
        else if(arr[m]>k)
        {
            return binary(arr,l,m-1,k);
        }
        else if (arr[m]<k)
        {
            return binary(arr,m+1,r,k);
        }
    }
    return -1;
}