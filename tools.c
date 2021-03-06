/**
 * is_number - check if the string is a number
 * @c: string
 * Return: 1 if is number digit
 * if not, 0 is returned.
 */
int is_number(char *c)
{
	char *aux = c;

	for (; aux != '\0'; aux++)
	{
		if (*aux < 48 || *aux > 57)
			return (0);
	}

	return (1);
}
