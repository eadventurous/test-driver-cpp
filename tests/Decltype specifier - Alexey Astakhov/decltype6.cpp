// Author : Astakhov Alexey
// (()) dos not inherits const specifier

#include <iostream>

using namespace std;
struct Foo {
	int x;
};

int main() {
	int i = 1;
	const struct Foo g = { 0 };

	decltype(g.x) var1;
	decltype((g.x)) var11 = i;

	if (typeid(var1) == typeid(var11)) {
		return 0;
	}
	else {
		return 1;
	}
	return 0;
}
