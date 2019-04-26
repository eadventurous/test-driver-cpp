// Author - Astakhov Alexey
// if constexpr does not see there is no 's' parameter in struct S

#include<iostream>
#include<string>

using namespace std;

struct S
{
	int n;
	float d;
};

template <size_t I>
auto& get(S& s)
{
	if constexpr (I == 0)
		return s.n;
	else if constexpr (I == 1)
		return s.s;
}
int main()
{
	S obj{ 0, 10.0f };
	if (get<0>(obj) == 0)
		return 0;
	else
		return 1;
}
