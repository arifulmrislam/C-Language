#include <stdio.h>
void change_array(int arr[],int arr2[], int n)
{
    int num[n];
    for (int i = 0; i < n; i++) {
        num[n - 1 - i] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr2[i] = num[i];
    }
}
int main(void)
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int arr2[n];
    change_array(arr,arr2, n);
//    print(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}

