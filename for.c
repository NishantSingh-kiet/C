//WAP of For loop
//take two variables a and b 
// if a and b is equal or less lhan 9 print in alphabet and print even or odd 
//if greater than 9 print even or odd 

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;                                                          //variable declaration...............
    
	char *strings[] = {"one", "two", "three", "four", "five", "six", "seven",  "eight",  "nine", "even", "odd"};

	scanf("%d\n%d", &a, &b);                                           //input a&b............
      int labels_index;
      int i;
     for(i=a; i<=b; i++)                                         //loop star from a to b
    {
      if (i <= 9)                                                     //logic..........
        printf ("%s\n", strings[i-1]);
      else 
        printf ("%s\n", strings[9+(i%2)]);
    }
return 0;
}

