#include<stdio.h>

/**
 * main-print the string in the printf function
 *
 * Description: using the main function
 * this program prints "Size of various types on the computer
 * Return: 0
 */
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %ld byte(s)\n", (unsigned long)size0f(c));
	printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %d bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}

