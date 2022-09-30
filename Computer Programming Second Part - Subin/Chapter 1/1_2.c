// #include <stdio.h>

// int find_max(int arr[], int n)
// {
//     int max = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     return max;
// }
// int find_min(int arr[], int n)
// {
//     int min = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > min)
//         {
//             min = arr[0];
//         }
//     }
//     return min;
// }
// int find_sum(int arr[], int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];
//     }
//     return sum;
// }

// int find_avg(int arr[], int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];
//     }
//     int avg = sum / n;
//     return avg;
// }

// int main()
// {
//     int n = 10;
//     int arr[10] = {10, 20, 30, 40, 50, 99, 105, 69, 55, 88};
//     int max = find_max(arr, n);
//     printf("%d\n", max);
//     int min = find_min(arr, n);
//     printf("%d\n", min);
//     int sum = find_sum(arr, n);
//     printf("%d\n", sum);
//     int avg = find_avg(arr, n);
//     printf("%d\n", avg);
//     return 0;
// }

// #include<stdio.h>
// void test_function(int arr[]){
//     arr[0] = 100;
//     return;
// }
// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     test_function(arr);
//     printf("%d\n",arr[0]);

//     return 0;

// }