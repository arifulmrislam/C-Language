// #include<stdio.h>

// void test_function(int n){
//     if(n % 2 == 0)
//     {
//         printf("The entered number is even\n");
//     }
//     else
//     {
//         printf("The entered number is odd\n");
//     }
// }
// int main()
// {
//     int num;
//     scanf("%d", &num);
//     test_function(num);
//     return 0;
// }

#include<stdio.h>

int test_function(int n){
    return (n & 1);
}
int main()
{
    int num;
    scanf("%d", &num);
    test_function(num);
    if(test_function(num)){
        printf("The entered num is odd \n\n");
    }
    else{
        printf("The entered num is even \n\n");
    }
    return 0;
}