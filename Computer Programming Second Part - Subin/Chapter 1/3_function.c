#include<stdio.h>

void swap(int *n1, int *n2){
    int test = *n1;
    *n1 = *n2;
    *n2 = test;
}
int main()
{
    int n1 = 2, n2 = 4;
    printf("Before swapping: n1 = %d, n2 = %d\n",n1,n2);
    swap(&n1,&n2);
    printf("After swapping:n1 = %d, n2 = %d",n1,n2);
    return 0;
}