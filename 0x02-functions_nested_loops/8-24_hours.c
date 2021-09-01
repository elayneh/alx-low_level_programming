/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * h = hour, m = minutes
 * / 10 allows second digit to rotate
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */
void jack_bauer(int m)
{
	for (m = '1'; m <= '24'; ++m)
	{
		_putchar('m');
	}
}
