#include<stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int sort(int arr[],int n){
    int count=0;
    for(int steps=0;steps<n-1;steps++){
        int minelements = arr[steps],pos=steps;
        for(int i=steps+1;i<n;i++){
            if(arr[i]<minelements){
                minelements = arr[i];
                pos = i;
            }
        }
        swap(&arr[steps], &arr[pos]);
        count++;
        //printf("Steps: %d\n", steps);
        //printf("Min: %d at pos %d\n", minelements,pos);
        //for(int i=0;i<n;i++){
        //    printf("%d ",arr[i]);
        //}
        //printf("\n \n");
    }
    return count;
}

int main(){
    int arr[6]={1,10,50,10,20,100};
    int n= sort(arr,6);
    printf("%d ", n);
}
