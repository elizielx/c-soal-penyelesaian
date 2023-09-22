#include <stdio.h>
#include <conio.h>

int main()
{
    int n = 149;
    int res;

    // Operator AND bit wise: Returns a value where each bit of the output is 1 if the corresponding bits of both operands are 1, otherwise it returns 0.
    res = n & 0017;
    printf("Hasil dari operator AND bit wise: %d \n", res);

    // Operator OR bit wise: Returns a value where each bit of the output is 1 if at least one corresponding bit of either operand is 1, otherwise it returns 0.
    res = n | 0017;
    printf("Hasil dari operator OR bit wise: %d \n", res);

    // Operator AND logika: Returns 1 if both operands are non-zero, otherwise it returns 0.
    res = n && 0017;
    printf("Hasil dari operator AND logika: %d \n", res);

    // Operator OR logika: Returns 1 if at least one operand is non-zero, otherwise it returns 0.
    res = n || 0017;
    printf("Hasil dari operator OR logika: %d \n", res);

    // Operator XOR bit wise: Returns a value where each bit of the output is 1 if the corresponding bits of both operands are different, otherwise it returns 0.
    res = n ^ 0017;
    printf("Hasil dari operator XOR bit wise: %d \n", res);

    // Operator shift left: Shifts the bits of the first operand to the left by the number of positions specified by the second operand. The vacant bits are filled with 0.
    res = n << 2;
    printf("Hasil dari operator shift left: %d \n", res);

    // Operator shift right: Shifts the bits of the first operand to the right by the number of positions specified by the second operand. The vacant bits are filled with 0.
    res = n >> 2;
    printf("Hasil dari operator shift right: %d \n", res);

    // Operator NOT bit wise: Returns a value where each bit of the output is the opposite of the corresponding bit of the operand.
    res = ~n;
    printf("Hasil dari operator NOT bit wise: %d \n", res);

    getch();
    return 0;
}