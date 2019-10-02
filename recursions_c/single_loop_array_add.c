#include<stdio.h>

int rec(int *,int ,int);
int main()
{
    
    int n=0;
    scanf("%d",&n);
    int a[n];

        for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
       

    }
    for(int i=0;i<n-1;i++)
    printf("%d ",a[i]);

    printf("\n ");

    rec(a,0,0);
    
    for(int i=0;i<n-1;i++)
        printf("%d ",a[i]);

        return 0;
}

int rec(int *a,int i , int j)
{
    static int finalval;
    static int ret=0;
    static int g=0;
    if(g==-1)
    {
        finalval =1;
        
        ret=i;
        return(ret);
    }
    else{

        g=a[j];
        if(g==-1)
        {
            finalval=0;
            
            ret=i;
            return(ret);
            
        }
        j++;
        g=a[j];
        
        int r= a[i];
        
        int d = rec(a,i+1,j+1);
        
        if(finalval==1)
        {
            finalval=0;
            return d;
        }
        int v = r + a[d];
        a[i]=v;
        a[d]=v;
        return(++ret);
       
        
    }
}
