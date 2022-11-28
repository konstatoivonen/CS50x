#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for x
    long x = get_long("x: ");

    // Promt user for Y
    long y = get_long("y: ");

    // Performs addition
    printf("%li\n", x + y);
}