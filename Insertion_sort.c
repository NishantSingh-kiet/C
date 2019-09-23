//WAP to perform insertion sort
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[50],n,key=0,j,i;                        //variable declaration............
	printf("enter the number of array elements");
	scanf("%d",&n);
	printf("enter the elements of array");
	for(i=0;i<n;i++)                        
	{
	
	scanf("%d",&arr[i]);                           //input array elements............
	}
	 for(j=1;j<n;j++)                              //logic..................
	 {
	 	key=arr[j];
	 	i=j-1;
	 
		 while(i>=0&&arr[i]>key)
	 	{
	 		arr[i+1]=arr[i];
	 		i=i-1;
	 	}
	 	arr[i+1]=key;                                  
	}
	printf("the sorted elements are\n");
	for(i=0;i<n;i++)
	{
		
	     printf(" %d\t",arr[i]);                 //print sorted array.............
	}
	getch();
}
