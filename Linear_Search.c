//Linear Search 
#include<stdio.h>
#include<conio.h>
void main()
{
	 //variable declaration
	   int arr[10],i,n,ele,found=0;
	   clrscr();
	   //.............................
	   printf("How many elements, do you want in array:");
	   scanf("%d",&n);
	   //.............................
	   printf("Enter the elements in array");
	   for(i=0;i<n;i++)
	   {
			scanf("%d",&rr[i]);
	   }
	   //............................
	   printf("\n Which element do you want to search:");
	   scanf("%d",%ele);
	   for(i=0;i<n;i++)
		{
				if(arr[i]==ele)
				{ 
					printf("found at location %d",i);
					found=1;
					break;
				}
				
		}
		//.........................
		if(!found)
		{
				printf("\nNot found");
		}
		getch();
}
