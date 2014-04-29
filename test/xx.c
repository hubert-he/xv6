#include <stdio.h>

void g()
{
	printf("%s: %x %x %x\n", __FUNCTION__, __builtin_return_address(0), __builtin_return_address(1), __builtin_return_address(2));
}

void f()
{
	g();
}

int main()
{
	f();
	return 0;
}