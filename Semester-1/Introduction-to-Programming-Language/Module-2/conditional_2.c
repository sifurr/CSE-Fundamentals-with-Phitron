#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("Burger khabo");
    }
    else if(tk >= 50)
    {
        printf("Fuchka khabo");
    }
    else if(tk >= 20)
    {
        printf("ice-cream khabo");
    }
    else
    {
        printf("Sharadin kichhui khabo na");
    }

    return 0;
}