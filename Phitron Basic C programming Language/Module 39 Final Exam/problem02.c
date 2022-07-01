#include<stdio.h>
#include<string.h>
int main(){
    char ch[50];
    gets(ch);
    int len = strlen(ch);
    int count = 0;
    for(int i=0;i<len;i++){
        if(ch[i] == 'a'){
            count++;
        }
    }
    if(count > len/2){
        printf("%d",len);
    }
    else{
        printf("%d",count*2-1);
    }

    return 0;
}
