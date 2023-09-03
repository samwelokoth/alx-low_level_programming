#include<main.h>
#include<stdio.h>

/**
 * main-checks if value entered is uppercase 
*/
int _isupper(int c)
{
if(c <= 'Z' && c >= 'A')
{
return 1;


}

else {
	return 0;
}

}