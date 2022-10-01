// Write a program in C to convert decimal number to binary number using the function     
#include<stdio.h>
void decToBinary(int n){
    int binaryNum[32];//store decimal number to array.

    //counter for binary array
    int i = 0;
    while(n>0){
        //storing reminder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    //printing binary array in reverse order 
    for(int j = i-1;j>=0;j--){
        printf("%d",binaryNum[j]);
    }
}
int main()
{
    int num;
    printf("Input any decimal number: ");
    scanf("%d",&num);
    decToBinary(num);//call function
    return 0;
}