#include<stdio.h>
#include<string.h>
int main()
{
    int t,c,k;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        c=1000000000;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                k=abs(arr[i]-arr[j]);
                if(c>k)
                    c=k;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
