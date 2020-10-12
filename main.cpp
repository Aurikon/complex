#include <iostream>
#include "complex.h"
#include <vector>
#include <algorithm>

int main()
{
	std::size_t N;
	std::cout << "Enter the count of elements: ";
	std::cin >> N;
	std::vector<complex> complex_arr(N);

	std::cout<<"Enter complex numbers: ";
	for(std::size_t i = 0; i < complex_arr.size(); ++i)
	{
		std::cin >> complex_arr[i];
	}

	// sorting array by increasing complex abs
	std::sort(complex_arr.begin(), complex_arr.end(),
	 [](complex& c1, complex& c2) { return c1.getAbs() < c2.getAbs(); });


	std::cout << "Output sorted vector: \n";
	for(std::size_t i = 0; i < complex_arr.size(); ++i)
	{
		std::cout << complex_arr[i] << "\n";
	}


	return 0;
}
