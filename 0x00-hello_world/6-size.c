#include <stdio.h>
/**
 * main - A program tha prints the size of various types
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf("Size of a char: %1u byte(s)\n", (int)sizeof(a));
	printf("Size of an int: %1u byte(s)\n", (int)sizeof(b));
	printf("Size of a long int: %1u byte(s)\n", (int)sizeof(c));
	printf("Size of a long long int: %1u byte(s)\n", (int)sizeof(d));
	printf("Size of a long float: %1u byte(s)\n", (int)sizeof(f));
}
