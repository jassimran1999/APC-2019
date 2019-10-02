

#include<stdio.h>
#include<stdlib.h>

void rot_arr(int **,int,int);
int main()
{
    int n,m;
    scanf("%d\n%d",&n,&m);
    //int **x = (int **)malloc(n * sizeof(int *));
    int *x[n];
    for(int i=0;i<n;i++)
    {
        x[i] = (int *)malloc(m * sizeof(int));
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    
    rot_arr(x,n,m);
    printf("%d",x[0][0]);
}

void rot_arr(int **a,int n,int m)
{
    int x=0,y=0;
    int r = n,c=m;
    while()
}
