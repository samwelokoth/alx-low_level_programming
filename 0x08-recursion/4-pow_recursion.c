#include<main.h>
/**
 * Write a function that returns the value of
 * x raised to power y 
 * ptototype: Int _pow_recursion(int x , int y)
 * it y is lower than 0 , the function should return -1
*/

int _pow_recursion(int x, int y);

if(y < 0 )
{
	return(-1);
}
else if (y == 0)
{
	return(0);
}
{
	return(_pow_recursion(x * y-1));


 }