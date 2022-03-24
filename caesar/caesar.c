#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
  if (only_digits(argv[1]))
    
}

bool only_digits(string s)
{
  int lenght = strlen(s);
  for (int i = 0; i < lenght; i++)
   if (isdigit(s[i]) == 0)
    return false;
   return true;
}