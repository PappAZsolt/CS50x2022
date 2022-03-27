#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int x;
    do
    {
        x = get_int("Change owed: ");
    } while (x < 1);
    return x;
}

int calculate_quarters(int cents)
{
    int cnt = 0;
    while (cents >= 25)
    {
        cnt++;
        cents -= 25;
    }
    return cnt;
}

int calculate_dimes(int cents)
{
    int cnt = 0;
    while (cents >= 10)
    {
        cnt++;
        cents -= 10;
    }
    return cnt;
}

int calculate_nickels(int cents)
{
    int cnt = 0;
    while (cents >= 5)
    {
        cnt++;
        cents -= 5;
    }
    return cnt;
}

int calculate_pennies(int cents)
{
    int cnt = 0;
    while (cents >= 1)
    {
        cnt++;
        cents -= 1;
    }
    return cnt;
}
