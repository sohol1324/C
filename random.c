#include <stdio.h>

#define SEED 17
#define MULT 25173
#define INC 13849
#define MOD 65536

unsigned int call_count = 0;
static unsigned seed = SEED;

unsigned random_i(void)
{
	seed = (MULT * seed + INC) % MOD;
	call_count++;
	return seed;
}

double random_f(void)
{
	seed = (MULT * seed + INC) % MOD;
	call_count++;
	return seed / (double)MOD;
}