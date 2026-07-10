/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase using _putchar
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

