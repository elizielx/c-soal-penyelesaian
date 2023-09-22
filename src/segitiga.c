#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void RIGHTANGELED(int p, int q, int r);

int main()
{
    int p, q, r;
    system("cls");

    printf("Masukan nilai-nilai untuk p, q, dan r: \n");
    scanf("%d %d %d", &p, &q, &r);

    RIGHTANGELED(p, q, r);
    getch();
    return 0;
}

void RIGHTANGELED(int p, int q, int r)
{
    p *= p;
    q *= q;
    r *= r;

    if ((p + q) == r || (q + r) == p || (r + p) == q)
        printf("Segitiga ini adalah segitiga siku-siku.\n");
    else
        printf("Segitiga ini bukan segitiga siku-siku.\n");
}