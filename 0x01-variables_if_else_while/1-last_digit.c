/*
 * File: 1-last_digit.c
 * Auth: Kipronoh Vincent
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number "Done"
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int ld;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
    	ld = n % 10;
    	printf("%d\n", last_digit);
    if (ld>5){
        printf("and is greater than 5");
    }
    else if (ld==0){
        printf("and is 0");
    }
    else if (ld<6) {
        printf("and is less than 6 and not 0");
    }
	return (0);
}
