#include <iostream>

int main()
{
	int a, b, c;
	std::cout << "Insert a: ";
	std::cin >>a;
	std::cout << "Insert b: ";
	std::cin >>b;
	c = a % b;
	if (c > 0) {
		std::cout << "a không chia hết cho b";
	}
	else {
		std::cout << "a chia hết cho b";
	}

	return 0;
}
