// Author : Astakhov Alexey
// c arrays normal copy

#include <iostream>

using namespace std;

template<typename T>
auto f(T a) ->decltype(a) {
	return a;
}

int main()
{
	int a[] = { 1,2,3 };
	auto b = f(a);
	//cout << a <<" "<< b;
	if (b == a)
		return 0;
	else
		return 1;
}
