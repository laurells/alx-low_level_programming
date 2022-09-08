#include<stdio.h>
/**
 * main - prints the size of various types
 * Return: 0 if exited properly.
 */
int main(void)
{
	int intType;
	float floatType;
	long int longintType;
	long long int longlongintType;
	char charType;

	// sizeof evaluates the size of a variable
	printf("Size of int: %d byte(s)\n", sizeof(intType));
	printf("Size of float: %d byte(s)\n", sizeof(floatType));
	printf("Size of char: %d byte(s)\n", sizeof(charType));
	printf("Size of long int: %d byte(s)\n", sizeof(longintType));
	printf("Size of long long int: %d byte(s)\n", sizeof(longlongintType));

	return 0;
