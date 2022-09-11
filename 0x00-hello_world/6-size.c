#include<stdio.h>

/**
 * main-print the string in the printf function
 *
 * Description: using the main function
 * this program prints "Size of various types on the computer
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long int: %ld byte(s)\n", (long unsigned int)sizeof(li));
	printf("Size of a long long int: %lld byte(s)\n", (long long unsigned int)sizeof(lli));
	printf("Size of a float: %ld bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
