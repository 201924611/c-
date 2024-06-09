#include "fun.h"
#include "common.h"

static int g_i = 0;
static int g_iStatic = 0;

int Add(int a, int b)
{
	return a + b;
}

int Sub(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}