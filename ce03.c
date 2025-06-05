#include <stdio.h>
#include <ctype.h>

int main()
{
  int shift, ch;

  shift = 'A' - 'D'; // Integer represented by subtracting characters

  while ((ch = getchar()) != EOF) // shifting the characters
  {
    if (isalpha(ch))
    {
      ch += shift;
      if (ch < 'A' || (ch > 'Z' && ch < 'a')) // checks if character is a letter
        ch += 26;
    }
    putchar(ch);
  }

  return (0);
}