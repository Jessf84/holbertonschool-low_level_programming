#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase using _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
 char ch;

 /* The prototype for the custom _putchar function */
 int _putchar(char c);

 /* First use of _putchar: inside the loop to print the alphabet */
 for (ch = 'a'; ch <= 'z'; ch++)
 {
  _putchar(ch);
 }

 /* Second use of _putchar: to print the newline character */
 _putchar('\n');

 return (0);
}

