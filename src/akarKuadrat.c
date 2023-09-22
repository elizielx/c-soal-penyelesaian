#include <stdio.h>
#include <conio.h>
#include <math.h>

void HitungAkar(float a, float b, float c);

int main()
{
    float a, b, c;

    printf("\nMasukan koefisien dari x^2, x, dan konstanta: (contoh: 56, 67, 78) ");

    // This code reads three floating-point numbers from standard input and stores them in the variables a, b, and c.
    // The values of a, b, and c are used to calculate the roots of a quadratic equation.
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0 || b == 0 || c == 0)
    {
        printf("\nKoefisien tidak boleh nol");
        return 0;
    }

    HitungAkar(a, b, c);

    /**
     * The getch() function reads a single character from the keyboard and returns its ASCII value.
     * This function does not echo the character to the screen.
     *
     * @return The ASCII value of the character read from the keyboard.
     */
    getch();

    return 0;
}

// This function calculates the roots of a quadratic equation using the formula (-b ± sqrt(b^2 - 4ac)) / 2a.
// If the discriminant (b^2 - 4ac) is greater than or equal to zero, the roots are real.
// If the discriminant is less than zero, the roots are imaginary.
void HitungAkar(float a, float b, float c)
{
    double d, akar1, akar2;

    // Calculate the discriminant
    d = ((b * b) - (4 * a * c));

    if (d >= 0)
    {
        // If the discriminant is greater than or equal to zero, the roots are real
        printf("\nAkar-akar yang didapatkan adalah rill:");

        // Calculate the roots
        akar1 = (-b + sqrt(d)) / (2 * a);
        akar2 = (-b - sqrt(d)) / (2 * a);

        // Print the roots
        printf("\nNakar1 = %f", akar1);
        printf("\nNakar2 = %f", akar2);
    }
    else
    {
        // If the discriminant is less than zero, the roots are imaginary
        printf("\nAkar-akar imajiner: \n");

        // Calculate the imaginary parts of the roots
        printf("Nakar1 = %f + i%f", -b / (2 * a), sqrt(-d));
        printf("\nNakar2 = %f - i%f", -b / (2 * a), sqrt(-d));
    }
}