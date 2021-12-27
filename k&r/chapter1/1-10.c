// 1-9: Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b,
// and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way
#include <stdio.h>

void ioloop(void);
void putesc(char);

int main()
{
  ioloop();
}

void ioloop()
{
  for (int c;;)
  {
    switch (c = getchar())
    {
    case EOF:
      return;
    case '\t':
      putesc('t');
      break;
    case '\b':
      putesc('b');
      break;
    case '\\':
      putesc('\\');
      break;
    default:
      putchar(c);
      break;
    }
  }
}

void putesc(char c)
{
  putchar('\\');
  putchar(c);
}