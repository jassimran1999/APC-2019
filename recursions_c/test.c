#include<stdio.h>
int main()
{
  int n=0;
  scanf("%d",&n);
  
  for(int i=0;i<n;i++)
  {
    int t=0;
    scanf("%d",&t);
    int opp=t;
    int get=0;
    while(opp>0)
    {
    	int val= opp%10;
    	get=get*10+val;
        opp=opp/10; 
    }
    if (t==get)
      printf("Equal");
    
    else
      printf("Not Equal");
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}