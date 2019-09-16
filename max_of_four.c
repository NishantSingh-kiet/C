#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d );
int main()
 {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
int max_of_four(int a,int b,int c,int d)
{
    if(a>b&&a>c&&a>d)   //check condition whether which one is greater
    {
        return(a);  //return value of a

    }
    else if(b>c&&b>d)
    {
        return(b);   //return value of b
    }
    else if(c>a&& c>b&&c>d)
    {
        return(c);   //return value of c
    }
    
    else
    { 
        return(d);  //return value of d
    }

}

