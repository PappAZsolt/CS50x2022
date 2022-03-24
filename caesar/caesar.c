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

  int key = atoi(argv[1]);
  printf("ciphertext: ");
  for (int i = 0, n = strlen(plaintext); i < n; i++)
  {
    printf("%c", rotate(plaintext[i], key));
  }
  printf("\n");
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
      char newWord = ((int)c - 65 + key) % 26;
      return newWord + 65;
    }

    else if (islower(c))
    {
      char newWord = ((int)c - 97 + key) % 26;
      return newWord + 97;
    }
  }
  return c;
}