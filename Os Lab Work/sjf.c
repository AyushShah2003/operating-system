#include<stdio.h>
#include<math.h>
#define max 30
int main()
{
   int i,j,n,
   t,p[max], bt[max],wt[max],at[max],tat[max];
   float awt=0;
   float atat=0;
   
	printf("Enter the Nuber of Process ");
	scanf("%d",&n);
	printf("Please Enter  the process Number ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
		
	}
	printf("Please Enter the Brust Time Of The Process");
	for(i=0;i<n;i++)
	{
     scanf("%d",&bt[i]);
     }
     //Sorting Process According to There Brust Time ----using Buble sort
     
       for(i=0;i<n;i++)
       {
       	for(j=0;j<n-i-1;i++)
       	{
       		if(bt[j]>bt[i])
			{
       			
			  
       		t = bt[j];
       		bt[j] = bt[j+1];
       		bt[j+1]= t;
       		
       		// sorting the Process
       		t =p[j];
       		p[j]=p[j+1];
       		p[j+1]=t;
       	     }
		  }
	  }
	  printf("Process\t bt\t at\t wt\t tat\n");
	  for(i=0;i<n;i++)
	  {
	  	wt[i]=0;
	  	tat[i]=0;
	  	for(j=0;j<i;j++)
	  	{
	  		wt[i]=wt[i]+bt[j];
	  		
		  }
		  tat[i]=bt[i]+wt[i];
		  awt = awt+wt[i];
		  atat = atat+tat[i];
		  printf("%d\t%d\t%d\t%d\t%d",i+1,bt[i],at[i],wt[i],tat[i]);
		  
	  }
               awt=awt/n;
               atat = atat/n;
               printf("Average Waiting time = %f\n",awt);
               printf("Average Turn Arround Time = %f\n",atat );
               return 0;
	return 0;
}
