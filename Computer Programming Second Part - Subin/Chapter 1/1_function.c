#include<stdio.h>

int test_function(int n1, int n2){
    int sum = n1 + n2;
    return sum;
}
int main()
{
    int n1 = 5, n2 = 6;
    int add = test_function(n1,n2);
    printf("The total is: %d\n",add);
    return 0;
}