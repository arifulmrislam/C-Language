#include<stdio.h>
void count_zero(char num[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(num[i] == '0'){
            count++;
        }
    }
    printf("%d",count);
}

int main()
{
    char num[8]="01111000";
    count_zero(num,8);
}
