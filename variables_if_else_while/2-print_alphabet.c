#include "main.h"

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
 int ch;

 ch = 'a';
 while (ch <= 'z')
 {
  _putchar(ch);
  ch++;
 }
 _putchar('\n');
 return (0);
}

