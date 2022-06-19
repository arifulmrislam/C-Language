#include <stdio.h>

int count_swaps(int *ar,int n)
{
    int counter = 0;
    for(int pos = 0; pos < n-1; pos++) {
        for(int chake = pos+1; chake < n; chake++)
        {
            if(ar[pos] > ar[chake])
            {
                counter++;
            }
        }
    }
    return counter;
}

int main()
{
    int ar[] = {10,40,30,20,7};
    int size = sizeof(ar) / sizeof(ar[0]);

    int count = count_swaps(ar,size);
    printf("Swap = %d\n");
}
