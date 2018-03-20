# include <iostream>
# include <cmath>

int milion_calc (float salary, float layoffs){

	float year;
	long div;
	float profit = salary-layoffs;
	//std::cout << profit << std::endl;
		if (profit <=0){
			std::cout << "broken!!!" << std::endl;
			return 0;
		}
		if (profit > 0){
			div=(float)1000000/profit;
			std::cout << div << std::endl;
			year= (float)div/12;	
			std::cout << year << std::endl;
			std::cout << "you'll become millionare in ";
			std::cout << year;
			//std::cout <<  floorf(year * 100)/100;
			std::cout << " years." << std::endl;
			 
		}
return 0;
}
