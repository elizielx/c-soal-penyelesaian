#include <stdio.h>
#include <conio.h>

int main()
{
    int n = 149;
    int res;

    res = n & 0017;
    printf("Hasil dari operator AND bit wise: %d \n", res);

    res = n | 0017;
    printf("Hasil dari operator OR bit wise: %d \n", res);

    getch();
    return 0;
}