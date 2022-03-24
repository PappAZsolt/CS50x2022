#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string s);
int ciphertext(string s);

int main(int argc, string argv[])
{
  if (only_digits(argv[1]) == 0 || argv[2] != NULL)
  {
    printf("Usage: ./caesar key\n");
    return 1;
  }

  string plaintext = get_string("plaintext: ");
  string newtext = ciphertext(plaintext);
  printf("ciphertext: %s\n", newtext);
  int key = atoi(argv[1]);
  printf("key: %i\n", key);
}

bool only_digits(string s)
{
  int lenght = strlen(s);
  for (int i = 0; i < lenght; i++)
    if (isdigit(s[i]) == 0)
      return false;
  return true;
}

int ciphertext(string s)
{
  for (int i = 0, n = strlen(s); i < n; i++)
  {
    if (isdigit(s[i]))
    {
      if (isupper(s[i]))
        s[i] = s[i] - 65;
      else if (islower(s[i]))
        s[i] = s[i] - 97;
    }
  }
  return s;
}