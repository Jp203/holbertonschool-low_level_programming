int string_length(char *s);
int checker(char *s, int o_set, int size);
/**
  * is_palindrome - checks if string is palindrome
  * @s: string
  * Return: 1 if string is palindrome, 0 if not
  */
int is_palindrome(char *s)
{
	int size;

	if (*s == '\0')
		return (1);
	size = string_length(s);
	return (checker(s, 0, size - 1));
}

/**
  * checker - check the string
  * @s: string
  * @offset: offset index
  * @size: size of string
  * Return: 1 if palindrome, 0 if not
  */
int checker(char *s, int o_set, int size)
{
	if (o_set > size / 2)
		return (1);
	if (*(s + o_set) == *(s + size - o_set))
		return (checker(s, o_set + 1, size));
	else
		return (0);
}
/**
  * string_length - get string length
  * @s: string
  * Return: length of string
  */
int string_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_length(s + 1));
}
