#include<stdio.h>
int main()
{
    int num=10;
    int *P=&num;
    int **Q=&P;
    int ***R=&Q;

//    printf("%d\ %p\n",num,&num);
    ***R=-100;
    printf("%d\n",num);

//    printf("%p\n",P);
//    printf("%p\n",Q);
//    printf("%p\n",R);
}
