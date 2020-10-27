#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <malloc.h>

double array[10] = { 0 };
double min = 0;
int i, array_size, count_of_min, count_output;
int maxdiap, mindiap;

int count()
{
	min = array[0];
	for (i = 0; i < 10; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
	}
	for (i = 0; i < 10; i++)
	{
		if (array[i] == min)
		{
			count_of_min++;
		}
	}
	return count_of_min;
}


int main()
{
	printf("Enter range of numbers from ");
	scanf_s("%d to %d", &mindiap, &maxdiap);


	for (i = 0; i < 10; i++)
	{
		array[i] = rand() % (maxdiap - mindiap + 1) + mindiap;
		printf("\nNumber %d: %.1f\n", i, array[i]);
	}
	count_output = count();

	printf("\nCount of minimum numbers: %d\n", count_output);
	return 0;
}