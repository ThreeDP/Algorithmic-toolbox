#include "lib_alg.h"

int	cmp_indx(const size_t *numbers, int actual, int max)
{
	if (numbers[actual] != numbers[max])
		return (1);
	return (0);
}

size_t	max_pairwise_product_fast(const size_t *nums, int size)
{
	int	frt_indx;
	int	sec_indx;
	int	i;

	i = 0;
	frt_indx = -1;
	while (i < size)
	{
		if (nums[i] > nums[frt_indx] || (frt_indx == -1))
			frt_indx = i;
		i++;
	}
	i = 0;
	sec_indx = -1;
	while (i < size)
	{
		if ((nums[i] > nums[sec_indx] || (sec_indx == -1)) && cmp_indx(nums, i, frt_indx))
			sec_indx = i;
		i++;
	}
	return (nums[frt_indx] * nums[sec_indx]);
}
