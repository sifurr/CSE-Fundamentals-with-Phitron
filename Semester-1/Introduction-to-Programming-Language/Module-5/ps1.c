#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    if(ch >= 'a') printf("%c\n", ch - 32);
    else if(ch < 'a') printf("%c\n", ch + 32);

    return 0;
}