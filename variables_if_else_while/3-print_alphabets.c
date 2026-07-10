#include <unistd.h>

/**
 * main - Prints lowercase and uppercase alphabets, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
 char letter;

 /* 1st putchar: Loop for lowercase 'a' to 'z' */
 for (letter = 'a'; letter <= 'z'; letter++)
 {
  putchar(letter);
 }

 /* 2nd putchar: Loop for uppercase 'A' to 'Z' */
 for (letter = 'A'; letter <= 'Z'; letter++)
 {
  putchar(letter);
 }

 /* 3rd putchar: Print a new line */
 putchar('\n');

 return (0);
}

