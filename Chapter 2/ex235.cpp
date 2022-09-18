#include <iostream>

int main(void)
{
	const int i = 42;
	auto j = i; const auto &k = i; auto *p = &i;
	const auto j2 = i, &k2 = i;

	std::cout << typeid(i).name() << "\n" << typeid(j).name() << "\n";
	std::cout << typeid(k).name() << "\n" << typeid(p).name() << "\n";
	std::cout << typeid(j2).name() << "\n" << typeid(k2).name() << "\n";
	
	return 0;
}
