#include <cs50.h>
#include <stdio.h>

bool AE(long long x)
{
  if (x == 34 || x == 37)
  {
    return true;
    return false;
  }

  return false;
}

bool MC(long long x)
{
  if (x == 51 || x == 52 || x == 53 || x == 54 || x == 55)
  {
    return true;
    return false;
  }

  return false;
}

bool Visa(long long x)
{
  if (x == 13 || x == 1)
  {
    return true;
    return false;
  }

  return false;
}

/* int type(int x)
{
  if (x ==)
} */

int main()
{
  unsigned long long x;
  do
  {
    x = get_long("Number: ");
  } while (x < 1);
  long long aux = x;
  int cnt = 2;

  while (aux > 99)
  {
    aux /= 10;
    cnt++;
  }

  int sum = 0;
  long long x2 = x / 10;

  while (x2)
  {
    int LastDigit = x2 % 10;
    LastDigit *= 2;
    if (LastDigit > 9)
    {
      while (LastDigit)
      {
        int lastlastDigit = LastDigit % 10;
        sum += ((lastlastDigit)*2);
        /* printf("%i", sum);
        printf("\n"); */
        LastDigit /= 10;
      }
    }
    else
      sum += LastDigit;
    printf("%i", sum);
    printf("\n");
    x2 /= 100;
  }

  /* printf("%lli", x2); */
}