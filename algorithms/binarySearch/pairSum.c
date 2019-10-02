#include<stdio.h>

void pairSum(int*,int,int,int);

int main()
{

}

void pairSum(int arr[],int l,int r,int k)
{
    if(l<=r)
    {
        int m = arr[l]+arr[r];
        if(m==k)
        {
            printf("%d\n",m);
            pairSum(arr,l+1,r,k);
        }
        else if(m<k)
        {
            pairSum(arr,l+1,r,k);
        }
        else if(m>k)
        {
            pairSum(arr,l,r-1;k);
        }
    }
}