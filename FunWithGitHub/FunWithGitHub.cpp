
#include <iostream>
#include "Functions.h"

int main()
{
    std::cout << "Input a nuber: ";
	double x; std::cin >> x;
	std::cout << " x + 1 = " << add(x)
		<< "\n x + 5 = " << add(x, 5.0) << '\n';
	system("pause");
}
