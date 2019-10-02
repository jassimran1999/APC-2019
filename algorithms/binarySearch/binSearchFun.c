
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
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(data[mid]<check)
        {
            start = mid+1;
        }
        else if(data[mid]>check)
        {
            end = mid-1;
        }
        else if(data[mid]==check)
        {
            return mid;
        }
    }
    return -1;
}