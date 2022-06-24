#include<stdio.h>
int odd_even(int x){
    if(x%2==0)  return 1;
    else return 0;
}
int main(){
    int num=7;
    int num2 = odd_even(num);
    printf("%d",num2);
}

#include<stdio.h>
void odd_even(int x){
    if(x%2==0)
    printf("Even");
    else{
        printf("Odd");
    }
}

int main(){
    int num=15;
    odd_even(num);
}

#include<stdio.h>
int odd_even(){
    int x = 10;
    if(x%2==0)  return 1;
    else return 0;
}
int main(){
    int x = odd_even();
    printf("%d",x);
}

#include<stdio.h>
void odd_even(){
    int x = 10;
        if(x%2==0){
            printf("Even");
        }
        else{
            printf("Odd");
    }
}
int main(){
    odd_even();
}
