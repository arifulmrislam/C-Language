#include <stdio.h>
#include <string.h>

int check_palindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;
    int count = 0;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int coun = check_palindrome("abcdcba");
    printf("%d\n",coun);
    return 0;
}

