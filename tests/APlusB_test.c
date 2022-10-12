#include <stdlib.h>
#include <stdio.h>
#include "minunit.h"

int	a_plus_b(int a, int b);

MU_TEST_SUITE(passing_10_plus_45_should_be_55)
{
	//ARRANGE
	int	a;
	int	b;
	int	expected_result;
	int	result;

	a = 10;
	b = 45;
	expected_result = 55;

	//ACT
	result = a_plus_b(a, b);

	//ASSERT
	mu_assert_int_eq(expected_result, result);
}

MU_TEST_SUITE(passing_0_plus_45_should_be_45)
{
	//ARRANGE
	int	a;
	int	b;
	int	expected_result;
	int	result;

	a = 0;
	b = 45;
	expected_result = 45;

	//ACT
	result = a_plus_b(a, b);

	//ASSERT
	mu_assert_int_eq(expected_result, result);
}

int main() 
{
	MU_RUN_TEST(passing_0_plus_45_should_be_45);
	MU_RUN_TEST(passing_10_plus_45_should_be_55);
	MU_REPORT();
	return MU_EXIT_CODE;
}
