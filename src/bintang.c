#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void pola(int m);

int main()
{
    int n;
    system("cls");

    printf("Masukan jumlah baris: \n");
    scanf("%d", &n);

    pola(n);
    getch();
    return 0;
}

/**
 * This function prints a pattern of asterisks based on the input integer m.
 * The pattern starts with one asterisk on the first line, and adds one more asterisk on each subsequent line until m asterisks are printed on the last line.
 *
 * @param m The number of asterisks to print on the last line of the pattern.
 */
void pola(int m)
{
    int i = 0, j = 0;
    for (i = 0; i <= m; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}