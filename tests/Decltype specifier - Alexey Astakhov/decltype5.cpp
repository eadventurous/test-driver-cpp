// Author : Astakhov Alexey
// correct usage with functions

#include <iostream>

using namespace std;

int func() {
	return 0;
}
int func(int a) {
	return 0;
}

int main() {

	int i = 3;

	decltype(func(i)) var1;

	return 0;
}
