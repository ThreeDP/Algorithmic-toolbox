#include "lib_alg.h"

static int	cmp_indx(const size_t *numbers, size_t actual, size_t max)
{
	if (numbers[actual] == numbers[max])
		return (1);
	return (0);
}

size_t	max_pairwise_product_fast(const size_t *nums, size_t size)
{
	size_t	frt_indx;
	size_t	sec_indx;
	size_t	i;

	i = 0;
	frt_indx = -1;
	while (i < size)
		if ((frt_indx == -1) || (nums[i] > nums[frt_indx]))
			frt_indx = i;
	i = 0;
	sec_indx = -1;
	while (i < size)	
		if (cmp_indx(nums, i, frt_indx)
		&& (sec_indx == -1) || (nums[i] > nums[sec_indx]))
			sec_indx = i;
	return (nums[frt_indx] * nums[sec_indx]);
}
