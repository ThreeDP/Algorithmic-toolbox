#include <stdlib.h>
#include <stdio.h>
#include "minunit.h"
#include "../APlusB.h"

MU_TEST_SUITE(name)
{

}

int main() {
	MU_RUN_SUITE(name);
	MU_REPORT();
	return MU_EXIT_CODE;
}
