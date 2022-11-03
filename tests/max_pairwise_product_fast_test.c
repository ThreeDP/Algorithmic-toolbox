#include "../srcs/lib_alg.h"
#include "minunit.h"

size_t	max_pairwise_product(const size_t *numbers, size_t size);

MU_TEST_SUITE(passing_6_elements_and_numbers_1_4_5_25_60_3_shouuld_be_1500)
{
	//ARRANGE
	size_t	i;
	size_t	*ptr;
	size_t	num_elements;
	size_t	array[] = {1, 4, 5, 25, 60, 3};
	size_t	expected_result;
	size_t	result;

	//ACT
	i = 0;
	num_elements = 6;
	expected_result = 1500;
	ptr = calloc(num_elements + 1, sizeof(expected_result));
	while (i < num_elements)
	{
		ptr[i] = array[i];
		i++;
	}
	result = max_pairwise_product_fast(ptr, num_elements);

	//ASSERT
	mu_assert_int_eq(expected_result, result);
	free(ptr);
}

MU_TEST_SUITE(passing_2_elements_and_numbers_100000_90000_shouuld_be_9000000000)
{
	//ARRANGE
	size_t	i;
	size_t	*ptr;
	size_t	num_elements;
	size_t	array[] = {100000, 90000};
	size_t	expected_result;
	size_t	result;

	//ACT
	i = 0;
	num_elements = 2;
	expected_result = 9000000000;
	ptr = calloc(num_elements + 1, sizeof(expected_result));
	while (i < num_elements)
	{
		ptr[i] = array[i];
		i++;
	}
	result = max_pairwise_product_fast(ptr, num_elements);

	//ASSERT
	mu_assert_int_eq(expected_result, result);
	free(ptr);
}

MU_TEST_SUITE(passing_10_elements_and_numbers_7_5_14_2_8_8_10_1_2_3_should_be_140)
{
	//ARRANGE
	size_t	i;
	size_t	*ptr;
	size_t	num_elements;
	size_t	array[] = {7, 5, 14, 2, 8, 8, 10, 1, 2, 3};
	size_t	expected_result;
	size_t	result;

	//ACT
	i = 0;
	num_elements = 10;
	expected_result = 140;
	ptr = calloc(num_elements + 1, sizeof(expected_result));
	while (i < num_elements)
	{
		ptr[i] = array[i];
		i++;
	}
	result = max_pairwise_product_fast(ptr, num_elements);

	//ASSERT
	mu_assert_int_eq(expected_result, result);
	free(ptr);
}

int main() {
	MU_RUN_TEST(passing_10_elements_and_numbers_7_5_14_2_8_8_10_1_2_3_should_be_140);
	MU_RUN_TEST(passing_2_elements_and_numbers_100000_90000_shouuld_be_9000000000);
	MU_RUN_TEST(passing_6_elements_and_numbers_1_4_5_25_60_3_shouuld_be_1500);
	MU_REPORT();
	return MU_EXIT_CODE;
}
