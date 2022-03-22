#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);

int main(void)
{
  string text = get_string("Text: ");
  int letters = count_letters(text);
  printf("%i\n", letters);
}

int count_letters(string text)
{
  int cnt = 0;
  for (int i = 1, n = strlen(text); i <= n; i++)
  {

    if (islower(text[i]))
      cnt++;
  }
  return cnt;
}