#include "search_algos.h"
/**
 * print_array - Prints elements of an array from index `low` to `high`
 * @array: Pointer to the array
 * @low: Starting index
 * @high: Ending index
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		i != high ? printf(", ") : printf("\n");
	}
}
/**
 * binary_search -  searches for a value in a sorted array of
 *                 integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located,
 *         -1 If value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	if (!array)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		print_array(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
