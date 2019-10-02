#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    int a[n];
   //int b[n];
    int counter=0;
    int flag=0;
    int min;
    int smal_pos=0;
    for(int i=0;i<n;i++)
    {
        int get=0;
        scanf("%d",&get);
        a[i]=get;
        if(get<=0)
        {
            counter++;
            //b[i]=0;
        }
        else{
            //b[i]=1;
            min=get;
        }
    }
    flag=counter;
     printf("%d     %d        ",flag,min);
                for(int i=0;i<n;i++)
                {
                    printf("%d",a[i]);
                }
                printf("\n");
    while(flag<n)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0 && min>a[i])
            {
                min=a[i];
                
            }
        }
        //printf("%d",min);
        // printf("%d",min);
        //flag ++;
        for(int i=0;i<n;++i)
        {
            int check;
            if(a[i]!=0 && (a[i]=a[i]-min)==0)
            {
                //b[i]=0;
                flag++;
                
            }
           if(a[i]<min && a[i]!=0)
                {
                check=a[i];
                }
            if()

        }
        printf("%d     %d        ",flag,min);
                for(int i=0;i<n;i++)
                {
                    printf("%d",a[i]);
                }
                printf("\n");
    }
}


