#include <iostream>

int banknotes(int value){
	if (value <= 0)
		return 0;
	if (value >= 100){
		value = value - 100;
		std::cout << " 100$ " << std::endl;
		banknotes (value);
		return 0;
	}
	if (value >= 50){
		value = value - 50;
		std::cout << " 50$ " << std::endl;
		banknotes (value);
		return 0;
	}
	if (value >= 25){
		value = value - 25;
		std::cout << " 25$ " << std::endl;
		banknotes (value);
		return 0;
	}
	if (value >= 10){
		value = value - 10;
		std::cout << " 10$ " << std::endl;
		banknotes (value);
		return 0;
	}
	if (value >= 5){
		value = value - 5;
		std::cout << " 5$ " << std::endl;
		banknotes (value);
		return 0;
	}
	if (value >= 1){
		value = value - 1;
		std::cout << " 1$ " << std::endl;
		banknotes (value);
		return 0;
	}
	return 0;
}
