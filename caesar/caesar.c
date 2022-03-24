#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

bool only_digits(string s);

int main(int argc, string argv[])
{
  if (only_digits(argv[1]) == 0 || argv[2] != '\0')
  {
    printf("Usage: ./caesar key");
    return 1;
  }
  else
  {
    string plaintext = get_string("plaintext: \n");
    printf("%s\n", plaintext);
  }
}

bool only_digits(string s)
{
  int lenght = strlen(s);
  for (int i = 0; i < lenght; i++)
    if (isdigit(s[i]) == 0)
      return false;
  return true;
}