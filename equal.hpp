#include <iostream>

int equal (int *numbers){
	int aux;
	int apear=1;

	aux=numbers[0]; //first number don't enter the checkup
	for (int i=1; i<10; i++){
		if( numbers[i]== aux){
			apear++; // for the repeated numbers
		}
		else {
			//if it's not equal to his successor, we check if it
			//was already counted in
			if ( apear > 1 ){
				std::cout << "the number "; 
				std::cout << aux;
				std::cout << " apeared ";
				std::cout << apear;
				std::cout << "times " << std::endl;
				apear =1;
			}
			aux = numbers[i];
		}
	}
	//to check the last value
	if ( apear > 1) {
		std::cout << "the number ";
                std::cout << aux;
                std::cout << " apeared ";
                std::cout << apear;
                std::cout << "times " << std::endl;                        
	}
	return 0;
}
