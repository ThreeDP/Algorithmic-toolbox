#include "lib_alg.h"

size_t	max_pairwise_product(const size_t *numbers, size_t size)
{
	size_t	result;
	size_t	i;
	size_t	j;

	i = 0;
	result = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (numbers[i] * numbers[j] > result)
			{
				result = numbers[i] * numbers[j];
			}
			j++;
		}
		i++;
	}
	return (result);
}
