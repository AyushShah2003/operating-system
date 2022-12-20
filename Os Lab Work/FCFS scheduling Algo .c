//*** Program By AYUSH SHAH *****
// Program 01->

#include<stdio.h>
#include<math.h>
#include<conio.h>
#define max 30
int main()
{

int i,j,n,bt[max],at[max],wt[max],tat[max],temp[max];
float awt =0, atat=0;

   printf("Please Enter the Number of the Process");
   scanf("%d",&n);
   
   printf("Enter The brust Time of The Process");
   //array- useing for loop 
   for(i=0;i<n;i++)
   {
   	scanf("%d",&bt[i]);
   }
   printf("Enter The Arrival Time of The Process");
   for(i=0;i<n;i++)
   {
   	scanf("%d",&at[i]);
   }
  /* printf("Enter the Waiting Time of the Process");
   for(i=0;i<n;i++)
   {
   	scanf("%d",&wt[i]);
   }*/
   temp[0]=0;
   printf("Process\tBrust Time\tArrival Time\t Waiting Time\tTurn Arround Time\t");
   for(i=0;i<n;i++)
   {
   	wt[i]=0;
   	tat[i]=0;
   	temp[i+1]=temp[i]+bt[i];
   	wt[i]=temp[i]-at[i];
   	tat[i]=wt[i]+bt[i];
   	awt = awt +wt[i];
   	atat = atat + tat[i];
   	printf("%d\t%d\t%d\t%d\t%d",i+1,bt[i],at[i],wt[i],tat[i]);
   	
   }
   awt=awt/n;
   atat = atat/n;
   printf("Average Waiting time = %f\n",awt);
   printf("Average Turn Arround Time = %f\n",atat );
   return 0;
   
   
}
