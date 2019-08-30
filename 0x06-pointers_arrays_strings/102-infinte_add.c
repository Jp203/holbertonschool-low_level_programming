#iinclude <stdio.h>
/**
  * infinite_add - add two strings
  * @n1: string1
  * @n2: string2
  * @r: result
  * @size_r: buffer size
  * Return: pointer to r
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num1, num2, plus;
	int int1, int2 = 0;

	num1 = num2;
	while (n1[num1] != '\0')
		num1++;
	while (n2[num2] != '\0')
		num2++;

	num2--;
	num1--;
	plus = 0;
	r[size_r - 1] = '\0';

	for (size_r -= 2; size_r >= 0; size_r--)
	{
		if (plus == 0 && num1 < 0 && num2 < 0)
			break;

		if (num1 < 0)
			int1 = 0;
		else
			int2 = n2[num2--] - '0';

		if (num2 < 0)
			int2 = 0;
		else
			int2 = n2[num2--] - '0';

		r[size_r] = (int1 + int2 + plus) % 10 + '0';
		plus = (int1 + int2 + plus) / 10;
	}
	if (size_r < 0 && ((num1 >= 0 || num2 >= 0) || plus != 0))
		return (0);
	return (&r[++size_r]);
}
