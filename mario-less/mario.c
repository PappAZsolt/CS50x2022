#include <cs50.h>
#include <stdio.h>

int main(void)
{
    do{
        int x = get_int("Height\n ");
    }while(x<1 && x>10);
}