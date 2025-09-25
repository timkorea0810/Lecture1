#include <iostream>
#include "math.h"

int main() {
	int x = {};
	int y = {};
	std::cin >> x >> y;
	std::cout << add(x, y) << std::endl;
	std::cout << multiply(x, y) << std::endl;
	std::cout << add(x, y, 10) << std::endl;
	std::cout << add(4.2, 2.7) << std::endl;
}