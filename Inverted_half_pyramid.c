//WAP to print half inverted pyramid
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,n;
//	clrscr();
	printf("enter the number");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
	
		}
		
	printf("\n");
	}
	
	getch();
}







/*output

*******
******
*****
****
***
**
*                          */
