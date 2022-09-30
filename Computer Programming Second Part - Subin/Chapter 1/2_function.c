#include<stdio.h>

int square(int n){
    int sqr = n * n;
    return sqr;
}
int main()
{
    int n = 10;
    int result = square(n);
    printf("The square of %d is: %d\n",n,result);
    
    return 0;
}