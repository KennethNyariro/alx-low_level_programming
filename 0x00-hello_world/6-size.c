#include<stdio.h>

/**
 * main-print the string in the put function
 *
 * Description: using the main function
 * this program "prints size of various types on the computer
 * Return: 0
 */
int main(viod)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of char: %ld byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of int: %ld byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of long int: %ld byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of long long int: %lld byte(s)\n",
	(unsigned long long)sizeof(lli));
	printf("Size of float: %ld byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
