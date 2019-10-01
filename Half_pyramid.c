//WAP to print star
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter the number");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
		{
			printf("*");
	
		}
		
	printf("\n");
	}
	getch();
}







/*output

*
**
***
****
*****                      */
                     
