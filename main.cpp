#include <iostream>
#include "milion.hpp"
#include "equal.hpp"
#include "banknotes.hpp"

int main () {
	int choice;
	std::cout << "type '1' for million, '2' for vector, or '3' for banknotes" << std::endl;
	std::cin >> choice;

	if (choice==1){
		/*==================DESCRIPTION=====================
		user type in his salary and layoffs and the 
		program estimates how many years will take for 
		the user to become millionaire
		===================================================*/
		float salary;
		float layoffs;

		std::cout << " type in your salary" << std::endl;
		std::cin >> salary;
		std::cout << "type in your layoffs" << std::endl;
		std::cin >> layoffs;

		milion_calc (salary, layoffs);
	}

	if (choice==2){
		/*=================DESCRIPTION======================
		user type in 10 integers, the program stores them 
		in a vector and the program shows how many times
		each vallue was repeated
		==================================================*/ 
		int numbers[10];
		std::cout << " type in 10 integers " <<std::endl;
		for (int i=0; i<10; i++)
			std::cin >> numbers[i];
		equal (numbers);			
	}
	
	if (choice==3){
		/*=================DESCRIPTION======================
		the user type in an integer, the program 
		tells how many banknotes of 100$, 50$, 25$, 10$, 5$
		and 1$ are needed to fill the vallue
		==================================================*/
		int notes;
		std::cout << "type in an integer vallue" << std::endl;
		std::cin >> notes;
		banknotes (notes);
	}
	
	if (choice !=1 && choice !=2 && choice !=3){
		std::cout << " ERROR! Choose a value from 1 to 3 " << std::endl;
	} 

	return 0;
}
