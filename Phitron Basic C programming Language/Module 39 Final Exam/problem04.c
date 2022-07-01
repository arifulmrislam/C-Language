#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    int sum=0,j,temp;
    for(int i=1; i<n; i++)
        for(j=0; j<n-i; j++)
            if(a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    for(int i=0; i<m&&a[i]<=0; i++)
    {
        sum+=a[i];
    }
    printf("%d\n",-sum);
    return 0;
}

