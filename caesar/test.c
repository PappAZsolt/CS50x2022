#include<cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, string argv[])
{
  if (only_digits(argv[1]) == 0 || argv[2] != NULL)
  {
    printf("Usage: ./caesar key\n");
    return 1;
  }

  char character = get_string("character: ");
  character = character + 1;
  printf("ciphertext: %c\n", character);
  int key = atoi(argv[1]);
  printf("key: %i\n", key);
}
