// 1-9: Write a program to copy its input to its output, replacing each string of one or
// more blanks by a single blank.
#include <stdio.h>

int main()
{
  int c, curr_blanks;

  curr_blanks = 0;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      curr_blanks++;
      if (curr_blanks == 1)
        putchar(' ');
    }
    else
    {
      putchar(c);
      curr_blanks = 0;
    }
  }
}