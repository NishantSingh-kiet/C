#include<stdio.h>
int count;                                                            //Global variable declaration.......
void input_array(int [],int ,int);
void logic(int [],int ,int);                                         //Function DEclaration..............
void output_array(int [],int,int);
void main()
{
int arr[50],size,low=0;                                             //Variable Declaration...............
printf("enter how many elements do you want in array");
scanf("%d",&size);
input_array(arr,low,size);                                         //calling for input function
logic(arr,low,size);                                               //calling for logic function
output_array(arr,low,size);										   //calling for output function
printf("count=%d",count);
//getch();
}
void input_array(int x[],int l,int s)
{
  int i;
    for(i=l;i<s;i++)
      {
        scanf("%d",&x[i]);
      }
}
void logic(int x[],int l,int s)
{
int i,j,min=0,temp=0;
count++;
for(i=l;i<s-1;i++)
  {
     count++;
     min=i;
     count++;
     count++;
     for(j=i+l;j<s;j++)
        {
          count++;
          if(x[j]<x[min])                                     //logic............
          {
          	min=j;
          	count++;
		  }
        }
     temp=x[i];
     x[i]=x[min];
     x[min]=temp;
     count+=3;
  }
}
void output_array(int x[],int l,int s)
{
int i;
for(i=l;i<s;i++)
  {
    printf("%d",x[i]);                                       //output in form of sorted Array
  }
}

