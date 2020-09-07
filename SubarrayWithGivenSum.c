#include <stdio.h>

int main()
{   
    int num,N,S,sum,i,j,l,sub,counter; 
	
    scanf("%d",&num);
    
	for(int k=0;k<num;k++)
	{
        scanf("%d %d",&N,&S);
        int a[N+1];
       
	    for(j=1;j<=N;j++)
	    {
	        scanf("%d",&a[j]);
		}
	    
	   	for(i=1;i<=N;i++)
	    {
            sum =0;
	        sub = S - sum;
            int l = i;
            counter=0;
	        while(sub >= a[l])
	        {
                sum = sum + a[l];
	             sub = S-sum;
                if(sum == S)
                {
                    counter ++ ;
                    printf("%d %d \n",i,l);
                }
              
                else
                {
                     l++;
                }
            }
            
            if(counter ==1)
            {
                break;
            }
        }
        if(counter != 1)
        {
            printf("-1");
        }
    }
    

}
	    

	
