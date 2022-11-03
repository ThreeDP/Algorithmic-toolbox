#include "../srcs/lib_alg.h"
#include "minunit.h"

MU_TEST_SUITE(passing_6_elements_and_numbers_1_4_5_25_60_3_shouuld_be_1500)
{
	//ARRANGE
	int		num_elements;
	size_t	array[] = {1, 4, 5, 25, 60, 3};
	size_t	expected_result;
	size_t	result;

	//ACT
	num_elements = 6;
	expected_result = 1500;
	result = max_pairwise_product_fast(array, num_elements);

	//ASSERT
	mu_assert_int_eq(expected_result, result);
}

MU_TEST_SUITE(passing_2_elements_and_numbers_100000_90000_shouuld_be_9000000000)
{
	//ARRANGE
	int		num_elements;
	size_t	array[] = {100000, 90000};
	size_t	expected_result;
	size_t	result;

	//ACT
	num_elements = 2;
	expected_result = 9000000000;
	result = max_pairwise_product_fast(array, num_elements);

	//ASSERT
	mu_assert_int_eq(expected_result, result);
}

MU_TEST_SUITE(passing_10_elements_and_numbers_7_5_14_2_8_8_10_1_2_3_should_be_140)
{
	//ARRANGE
	int		num_elements;
	size_t	array[] = {7, 5, 14, 2, 8, 8, 10, 1, 2, 3};
	size_t	expected_result;
	size_t	result;

	//ACT
	num_elements = 10;
	expected_result = 140;
	result = max_pairwise_product_fast(array, num_elements);

	//ASSERT
	mu_assert_int_eq(expected_result, result);
}

int main() {
	MU_RUN_TEST(passing_10_elements_and_numbers_7_5_14_2_8_8_10_1_2_3_should_be_140);
	MU_RUN_TEST(passing_2_elements_and_numbers_100000_90000_shouuld_be_9000000000);
	MU_RUN_TEST(passing_6_elements_and_numbers_1_4_5_25_60_3_shouuld_be_1500);
	MU_REPORT();
	return MU_EXIT_CODE;
}
