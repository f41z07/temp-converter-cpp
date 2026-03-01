#include <iostream>
#include <cmath>
#include <cctype>

int main(){
	std::cout << "***** Temperature convertor *****" << std::endl;	
	double temp;
	char unitFrom, unitTo;
	
	std::cout << "Which unit do you want to convert from? (C, F or K): ";
	std::cin >> unitFrom;
	unitFrom = toupper(unitFrom);
	
	switch(unitFrom){
		case 'C':
			std::cout << "Enter the temperature in Celsius: ";
			std::cin >> temp;
			
			std::cout << "Which unit would you like to convert to? (F or K): "; 
			std::cin >> unitTo;
			unitTo = toupper(unitTo);
			
			if(unitTo == 'F'){
				temp = (temp * 1.8) + 32;
				std::cout << "The temperature in Fahrehnheit is: " << temp << " °F";
			}
			else if(unitTo == 'K'){
				temp = temp + 273.15;
				std::cout << "The temperature in Kelvin is: " << temp << " K";
			}
			else{
				std::cout << "Invalid operator entered";
			}
			break;
		case 'F':
			std::cout << "Enter the temperature in Fahrenheit: ";
			std::cin >> temp;
			
			std::cout << "Which unit would you like to convert to? (C or K): "; 
			std::cin >> unitTo;
			unitTo = toupper(unitTo);
			
			if(unitTo == 'C'){
				temp = (temp - 32) / 1.8;
				std::cout << "The temperature in Celsius is: " << temp << " °C";
			}
			else if(unitTo == 'K'){
				temp = (temp - 32) / 1.8 + 273.15;
				std::cout << "The temperature in Kelvin is: " << temp << " K";
			}
			else{
				std::cout << "Invalid operator entered";
			}
			break;
		case 'K':
		    std::cout << "Enter the temperature in Kelvin: ";
			std::cin >> temp;
			
			std::cout << "Which unit would you like to convert to? (C or F): "; 
			std::cin >> unitTo;
			unitTo = toupper(unitTo);
			
			if(unitTo == 'C'){
				temp = temp - 273.15;
				std::cout << "The temperature in Celsius is: " << temp << " °C";
			}
			else if(unitTo == 'F'){
				temp = (temp - 273.15) * 1.8 + 32;
				std::cout << "The temperature in Fahrenheit is: " << temp << " °F";
			}
			else{
				std::cout << "Invalid operator entered";
			}
			break;	
		default:
		    std::cout << "Invalid operator entered"; 		
	}
	return 0;
}