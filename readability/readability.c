#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int count_words(string text);
int count_letters(string text);
int count_sentences(string text);

char punctuation[] = ".?!";

int main(void)
{
    string text = get_string("Text: ");
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);
    int AvgLetters = (letters/words) * 100;
    int AvgSentences = (sentences/words) * 100;
    double Grade = 0.0588 * AvgLetters - 0.296 * AvgSentences - 15.8;
    //index = 0.0588 * L - 0.296 * S - 15.8
    printf(")
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

int count_sentences(string text)
{
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
        if (strchr(punctuation, text[i]))
            count++;
    return count;
}