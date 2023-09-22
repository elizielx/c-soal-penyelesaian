#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int MAKS(int a, int b);

int main()
{
    int a, b, r;
    system("cls");

    printf("Masukan nilai-nilai untuk p dan q: \n");
    scanf("%d %d", &a, &b);

    r = MAKS(a, b);
    printf("Angaka maksimum adalah %d\n", r);

    getch();
    return 0;
}

int MAKS(int a, int b)
{
    return (a < b ? b : a);
}