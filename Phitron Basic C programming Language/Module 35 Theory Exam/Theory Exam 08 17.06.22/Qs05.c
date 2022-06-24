#include<stdio.h>
#include<stdbool.h>
bool check_array(int arr[],int n){
    int count=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<n;j++){
            if(arr[j] == i){
                count ++;
                break;
            }
        }
    }
    if(count == n) return true;
    else return false;
}
int main()
{
    int arr[6]={1,2,3,4,5,1};
    bool ans = check_array(arr,6);
    if(ans)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}

