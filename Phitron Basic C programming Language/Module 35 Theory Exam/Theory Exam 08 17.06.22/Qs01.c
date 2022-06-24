#include<stdio.h>
double make_sum(double num1,double num2)
{
    scanf("%lf %lf",&num1,&num2);
    double sum=num1+num2;
    return sum;
}

int main(){
    double num1,num2;
    double sum3 = make_sum(num1,num2);
    printf("%lf\n",sum3);
}
