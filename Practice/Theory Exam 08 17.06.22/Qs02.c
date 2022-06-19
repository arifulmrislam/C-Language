#include<stdio.h>
int make_average(int arr[],int n){
    int avr = 0;
    for(int i=0;i<n;i++){
        //printf("%d ",arr[i]);
        avr = avr + arr[i];
    }
    return (avr/n);
}

int main()
{
    int arr[6]={10,20,30,40,50,60};
    int avr2 = make_average(arr,6);
    printf("%d ",avr2);
}
