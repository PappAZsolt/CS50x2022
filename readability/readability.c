#include <cs50.h>
#include <ctype.h>
#include <math.h>
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
    float AvgLetters = (letters / words) * 100;
    float AvgSentences = (sentences / words) * 100;
    float index = 0.0588 * AvgLetters - 0.296 * AvgSentences - 15.8;
    printf("Sentences: %i\n", sentences);
    printf("%f\n", AvgLetters);
    printf("%f\n", AvgSentences);
    printf("%f\n", index);
    /* if (index >= 16)
        printf("index 16+\n");
    else if (index < 1)
        printf("Before index 1");
    else
        printf("index %i\n", (int)round(index)); */

    // index = 0.0588 * L - 0.296 * S - 15.8
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