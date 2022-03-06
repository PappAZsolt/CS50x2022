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
  long long x;
  do
  {
    x = get_long("Number: ");
  } while (x < 1);
  long long aux = x;
  int cnt = 2;
  while (aux > 10)
  {
    aux /= 10;
    cnt++;
  }
  printf("%i", cnt);
}