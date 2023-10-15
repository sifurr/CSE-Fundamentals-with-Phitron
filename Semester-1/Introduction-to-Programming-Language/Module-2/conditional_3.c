#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("Coxbazar jabo!\n");

        if (tk >= 10000)
        {
            printf("Going to Saint Martin");
        }
        else
        {
            printf("Cox bazar theke ferot chole jabo");
        }
    }
    else
    {
        printf("Kothao jabo na");
    }

    return 0;
}