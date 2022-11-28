#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your name? ");
    printf("hello, %s\n", answer);

    int number = get_int("How many? ");
    printf("%i\n", number);
}