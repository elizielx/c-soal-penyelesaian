#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    char kota[80];
    char c;
    int i = 0;
    int j = 0;

    while ((c = getchar()) != '\n')
        kota[i++] = c;
    j = i;
    i = 0;

    while (i < j)
        putchar(toupper(kota[i++]));

    getch();
    return 0;
}