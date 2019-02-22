/*
 * Factorial.cpp
 */

#include "Factorial.h"


int factorialRecurs(int n)
{
	if(n!=1) {
		return (n * factorialRecurs(n - 1));
	}
	return 1;

}

int factorialDinam(int n) {
	long aux[100] = {0};
	if (n >= 0) {
		aux[0] = 1;
		for (int i = 1; i <= n; ++i)
			aux[i] = i * aux[i - 1];
		return aux[n];
	}

	return 1;
}
