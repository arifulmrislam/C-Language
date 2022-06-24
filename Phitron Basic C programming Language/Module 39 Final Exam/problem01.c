#include <stdio.h>
int main()
{
    int n,a[100],c=0,i=0;
    while(1)
    {
        scanf("%d",&n);
        if(n==42)
        {
            break;
        }
        else
        {
            a[i]=n;
            i++;
            c++;
        }
    }
    for(int i=0; i<c; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
