#include<stdio.h>

int main()
{
    int N,K;
    scanf("%d %d",&N,&K);

    int x=1;

    for(int i=0;i<N;i++){
        if(x>K){
            x = x + K;
        }else{
            x = x * 2;
        }
    }
    printf("%d",x);
    return 0;
}
