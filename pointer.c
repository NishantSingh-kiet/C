//WAP to use of pointer
//add two number and difference of two number  (a+b) // (a-b)     
#include <stdio.h>

void update(int *a,int *b)
 {
     // Complete this function 
     int d=*a;
     *a=*a+*b;                             //logic...........
     *b=abs(d-*b);                         //for positive integer value
   
}

int main()
 {
     int a, b;                            //variable declaration
     int *pa = &a, *pb = &b;
    
     scanf("%d %d", &a, &b);
     update(pa, pb);                       //function calling.......
     printf("%d\n%d", a, b);              //output .............
     return 0;
}

