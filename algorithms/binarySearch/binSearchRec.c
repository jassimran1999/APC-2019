
#include<stdio.h>

int binary(int, int, int[] , int);

int main()
{
    int data[] = {1,2,3,4,5,6,7,8};
    int check = 0;
    scanf("%d",&check);
    printf("%d",binary(0,8,data,check));
    return 0;
}

int binary(int start,int end, int data[], int check)
{
    int mid = (start+end)/2;
    if(start>end)
    {
        return -1;
    }
    if( data[mid] == check)
    {
        return mid;
    }
    if(data[mid]>check)
    {
        return binary(start, mid-1,data, check);
    }
    if(data[mid]<check)
    {
        return binary(mid+1, end,data, check);
    }
}