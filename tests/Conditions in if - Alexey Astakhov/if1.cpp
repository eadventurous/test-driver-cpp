// if1.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>

using namespace std;

template<int  i>
int func()
{
	if constexpr (i == 0)
		return 0;
	else if constexpr (i > 0)
		return i;
	else
		return -1;
}
int main()
{
	int ret = func<0>();
	if (ret == 0) {
		return 0;
	}
	else {
		return 1;
	}
}
