#include<stdio.h>
#include<string.h>
int main()
{
    int L,R;
    scanf("%d%d",&L,&R);

    char S[100001];
    scanf("%s",S);
    //gets(S);
    int len = strlen(S);

    char temp;

    for(int i=L-1,j=R-1;i<j;i++,j--){
        temp = S[i];
        S[i] = S[j];
        S[j] = temp;
    }
    for(int i=0;i<len;i++){
        printf("%c",S[i]);
    }
    return 0;
}
