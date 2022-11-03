#include "../srcs/lib_alg.h"
#include "minunit.h"
#include "time.h"

MU_TEST_SUITE(passing_6_elements_and_numbers_1_4_5_25_60_3_shouuld_be_1500)
{
	//ARRANGE
	int		num_elements;
	size_t	array[] = {1, 4, 5, 25, 60, 3};
	size_t	slow;
	size_t	fast;
	clock_t	start;
	clock_t	end;
	double	t_fast;
	double	t_slow;

	//ACT
	num_elements = 6;
	time(&start);
	slow = max_pairwise_product(array, num_elements);
	time(&end);
	t_slow = (double)(end - start) / CLOCKS_PER_SEC;
	time(&start);
	fast = max_pairwise_product_fast(array, num_elements);
	time(&end);
	t_fast = (double)(end - start);

	//ASSERT
	mu_assert_int_eq(fast, slow);
	mu_assert_time(t_fast, t_slow);
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
	size_t	slow;
	size_t	fast;
	clock_t	start;
	clock_t	end;
	double	t_fast;
	double	t_slow;

	//ACT
	num_elements = 10;
	expected_result = 140;
	time(&start);
	slow = max_pairwise_product(array, num_elements);
	time(&end);
	printf("\ns\t%zu\t%.45f\ne\t%zu\t%.45f\n", start, (double)start / CLOCKS_PER_SEC, end, (double)end / CLOCKS_PER_SEC);
	t_slow = (double)(end - start) / CLOCKS_PER_SEC;
	printf("\n%.45f", t_slow);
	time(&start);
	fast = max_pairwise_product_fast(array, num_elements);
	time(&end);
	t_fast = (double)(end - start);
	printf("\n%zu", (end - start));

	//ASSERT
	mu_assert_int_eq(fast, slow);
	mu_assert_time(t_fast, t_slow);
}

int main() {
	MU_RUN_TEST(passing_10_elements_and_numbers_7_5_14_2_8_8_10_1_2_3_should_be_140);
	MU_RUN_TEST(passing_2_elements_and_numbers_100000_90000_shouuld_be_9000000000);
	MU_RUN_TEST(passing_6_elements_and_numbers_1_4_5_25_60_3_shouuld_be_1500);
	MU_REPORT();
	return MU_EXIT_CODE;
}
