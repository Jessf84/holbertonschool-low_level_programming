#include <unistd.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
 char ch = 'a';

 while (ch <= 'z')
 {
  write(1, &ch, 1);
  ch++;
 }

 _putchar('\n');

 return (0);
}

