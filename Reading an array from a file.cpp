#include <iostream>
#include <cstdlib>
#include <fstream>

int main() {
	std::ifstream data{ "in.txt" };

	if (data.is_open()) {
		int size{};
		data >> size;
		int* array{ new int[size] };

		for (int i{}; i < size; ++i) {
			data >> array[i];
		}

		for (int i{size}; i > 0; --i) {
			std::cout << array[i - 1] << " ";
		}
		std::cout << std::endl;

		delete[] array;
	}

	data.close();

	return EXIT_SUCCESS;
}
