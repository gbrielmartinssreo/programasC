#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[51];
    char a;
    int cont = 0;

    scanf("%s", &string);
    scanf(" %c", &a);

    for (int i = 0; i < (strlen(string)); i++)
    {
        if (string[i] == a)
        {
            cont++;
        }
    }

    printf("%d", cont);

    return 0;
}