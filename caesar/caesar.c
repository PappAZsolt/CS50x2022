#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string s);
char rotate(char c, int n);

int main(int argc, string argv[])
{
  if (only_digits(argv[1]) == 0 || argv[2] != NULL)
  {
    printf("Usage: ./caesar key\n");
    return 1;
  }

  string plaintext = get_string("plaintext: ");
  printf("ciphertext: %s\n", plaintext);
  string newtext = NULL;
  int key = atoi(argv[1]);
  printf("key: %i\n", key);

  for (int i = 0, n = strlen(plaintext); i < n; i++)
  {
    newtext[i] = rotate(plaintext[i], key);
  }
  printf("Ciphertext: %s\n", newtext);
}

bool only_digits(string s)
{
  int lenght = strlen(s);
  for (int i = 0; i < lenght; i++)
    if (isdigit(s[i]) == 0)
      return false;
  return true;
}

char rotate(char c, int key)
{
  if (isalpha(c))
  {
    if (isupper(c))
    {
      if (c + key > 90)
        // formula
        else c += key;
    }
    else if (islower(c))
    {
      if (c + key > 122)
        // formula
        else c += key;
    }
  }
  return c;
}