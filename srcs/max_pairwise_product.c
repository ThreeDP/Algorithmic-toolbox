#include "lib_alg.h"

size_t	max_pairwise_product(const size_t *numbers, int size)
{
	size_t	result;
	int		i;
	int		j;

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
