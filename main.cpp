#include <iostream>
#include "complex.h"
#include <vector>
int main()
{
	std::size_t N;
	std::cin >> N;
	std::vector<complex> complex_arr(N);
	for(std::size_t i = 0;i < complex_arr.size(); ++i)
	{
		std::cin >> complex_arr[i];
	}

	//sorting
	for(std::size_t i = 0; i < complex_arr.size(); ++i)
	{
		for(std::size_t j = 0; j < complex_arr.size()-1; ++j)
		{
		if(complex_arr[j].getAbs() > complex_arr[j+1].getAbs())
		std::swap(complex_arr[j], complex_arr[j+1]);
		}
	}

	for(std::size_t i = 0; i < complex_arr.size(); ++i)
	{
		std::cout << complex_arr[i] << "\n";
	}

	return 0;
}
