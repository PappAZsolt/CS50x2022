#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x;
    do
    {
        x = get_int("Height: \n");
    } while (x > 0);
    printf(x);
}