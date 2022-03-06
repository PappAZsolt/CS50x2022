#include <cs50.h>
#include <stdio.h>

bool AE(int x)
{
  if (x == 15)
  {
    while (x <= 10)
    {
      x /= 10;
    }
    if (x == 34 || x == 37)
      return true;
    return false;
  }
  return false;
}

bool MC(int x)
{
  if (x == 16)
  {
    while (x <= 10)
    {
      x /= 10;
    }
    if (x == 51 || x == 52 || x == 53 || x == 54 || x == 55)
      return true;
    return false;
  }
  return false;
}

bool Visa(int x)
{
  if (x == 16)
  {
    while (x <= 10)
    {
      x /= 10;
    }
    if (x == 13 || x == 1)
      return true;
    return false;
  }
  return false;
}