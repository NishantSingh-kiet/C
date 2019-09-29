//WAP to prit Table of a number
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,result=0;
printf("Enter the number");
printf("%d",&n);
for(i=1;i<=10;i++)
{
result=n*i;
}
printf("table of %d\n",result);
getch();
}
