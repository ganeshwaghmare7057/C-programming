#include <stdio.h>

int main() 
{
  char text[150];
  int vowels, consonant, digit, space;

  vowels = consonant = digit = space = 0;

  printf("Enter any string: ");
  fgets(text,(text),stdin);

  for (int i = 0; text[i] != '\0'; ++i)
   {
     text[i] = tolower(text[i]);

    if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u') 
    {
      ++vowels;
    }

    else if ((text[i] >= 'a' && text[i] <= 'z')) 
    {
      ++consonant;
    }

    else if (text[i] >= '0' && text[i] <= '9') 
    {
      ++digit;
    }

    else if (text[i] == ' ') 
    {
      ++space;
    }

  }
  printf("Vowels: %d\n", vowels);
  printf("Consonants: %d\n", consonant);
  printf("Digits: %d\n", digit);
  printf("spaces: %d\n", space);

  return 0;
}
