#include "main.h"

/**
 * main -Entry point of the program
 * @brief : A program that check for the lowercase letters
 * Written by samwelOKoth.
 * Return 1: if the char is lowercase else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else 
		return (0);
}
