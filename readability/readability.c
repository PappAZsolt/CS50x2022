#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int count_words(string text);
int count_letters(string text);
int main(void)
{
    string text = get_string("Text: ");
    int letters = count_letters(text);
    int words = count_words(text);
    printf("Letters: %i\n",letters);
    printf("Words: %i\n",words);
}

int count_letters(string text)
{
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
         count++;
    }
    return count;
}

int count_words(string text)
{
    int count = 1;
    for (int i = 0, n = strlen(text); i < n; i++)
     if (isspace(text[i]))
      count++;
    return count;
}