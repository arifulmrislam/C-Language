#include<stdio.h>

int main(){
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",arr+i);
        }
        for(int i=0;i<n/2;i++){
            printf("%d %d ",arr[i],arr[n-1-i]);
        }
        if(n%2 == 1){
            printf("%d",arr[i]);
        }
        printf("\n");
    }
    return 0;
}
