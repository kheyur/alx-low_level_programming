#include<stdio.h>
/**
 *
 * main - print size of specified tpyes
 *
 * Retun: 0
 */

int main(void)
{
	printf("Size of a char: " +  sizeof(char) + " byte(s)\n");
	printf("Size of an int: " + sizeof(int) + " bytes(s)\n");
	printf("Size of a long int: " + sizeof(long int) + " bytes(s)\n");
	printf("Size of a long long int: "+ sizeof(long long int) + " byte(s)\n");
	printf("Size of a float: " + sizeof(float) + " byte(s)\n");
        return (0);
}	
