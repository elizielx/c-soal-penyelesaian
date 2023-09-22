#include <stdio.h>

int main()
{
    int integer = 42;
    float floatingPoint = 3.141592;
    char character = 'A';
    char string[] = "Hello, World!";
    int *pointer = &integer;

    // %d: Used to print integers (decimal format)
    printf("Integer: %d\n", integer);

    // %f: Used to print floating-point numbers (decimal format)
    printf("Floating Point: %f\n", floatingPoint);

    // %c: Used to print characters
    printf("Character: %c\n", character);

    // %s: Used to print strings
    printf("String: %s\n", string);

    // %p: Used to print pointers
    printf("Pointer: %p\n", (void *)pointer);

    // %x or %X: Used to print integers in hexadecimal format
    printf("Integer in Hexadecimal (lowercase): %x\n", integer);
    printf("Integer in Hexadecimal (uppercase): %X\n", integer);

    // %o: Used to print integers in octal format
    printf("Integer in Octal: %o\n", integer);

    return 0;
}
