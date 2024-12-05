// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include<stdio.h>
#include<limits.h>
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
	unsigned int p = a * b;
	if (p >= INT_MAX) return UNIT_MAX;
	if (p <= INT_MIN) return UNIT_MIN;
	return p;
}
