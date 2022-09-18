#include <iostream>

int main(void)
{
	int i = 0, &r = i;
	const int ci = i, &cr = ci;
	auto a = r;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	auto &g = ci;

	std::cout << "Print variable values before assignment:\n";
	std::cout << "a = " << a << "\n";
	std::cout << "b = " << b << "\n";
	std::cout << "c = " << c << "\n";
	std::cout << "d = " << d << "\n";
	std::cout << "e = " << e << "\n";
	std::cout << "g = " << g << "\n";

	a = 42;
	b = 42;
	c = 42;
	d = 42;
	e = 42;
	g = 42;

	return 0;
}
