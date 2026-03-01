#include <iostream>
#include <cmath>
#include <cctype> // to convert into uppercase

int main(){
	double temp;
	char unitFrom, unitTo;
	bool isValid1 = false, isValid2 = false, isValid3 = false;

	std::cout << "***** TEMPERATURE CONVERTOR *****" << std::endl;
	
	do{
	std::cout << "Which unit do you want to convert from?(C, F or K): ";
	std::cin >> unitFrom;
	if(std::cin.peek() != '\n'){
		std::cout <<"Error: Please enter in only one character. ";
		std::cin.ignore(1000, '\n');
		std::cin.clear();		
	}
	else{
	unitFrom = toupper(unitFrom);
	
	switch(unitFrom){
		case 'C':
			isValid1 = true;
			do{
			std::cout << "Enter the temperature in Celsius: ";
			if(std::cin >> temp){
				isValid2 = true;
			}
			else{
				isValid2 = false;
				std::cin.clear();
				std::cin.ignore(1000, '\n');
			}
			}while(isValid2 == false);
			
		    do{
		    std::cout << "Which unit would you like to convert to?(F or K): ";
		    if(std::cin >> unitTo){
		    	unitTo = toupper(unitTo);
		    	switch(unitTo){
		    		case 'F':
		    			isValid3 = true;
			            temp = (temp * 1.8) + 32;
			            std::cout << "The temperature in Fahrenheit is: " << temp << " °F";	
			            break;
			        case 'K':
			        	isValid3 = true;
			        	temp = temp + 273.15;
			            std::cout << "The temperature in Kelvin is: " << temp << " K";
			            break;
			        default:
			        	std::cout << "Invalid unit entered. ";
				        isValid3 = false;
				        std::cin.clear();
				        std::cin.ignore(1000, '\n');
				}
			}
			else{
				std::cout << "Input error. ";
				isValid3 = false;
				std::cin.clear();
				std::cin.ignore(1000, '\n');
			}
			}while(isValid3 == false);		
		    break;
		case 'F':
			isValid1 = true;
			do{
			  std::cout << "Enter the temperature in Fahrenheit: ";
			  if(std::cin >> temp){
			  	isValid2 = true;
			  }
			  else{
			  	isValid2 = false;
			  	std::cin.clear();
			  	std::cin.ignore(1000, '\n');
			  }
			}while(isValid2 == false);
			
		    do{
		    std::cout << "Which unit would you like to convert to?(C or K): ";
		    if(std::cin >> unitTo){
		    unitTo = toupper(unitTo);
		    switch(unitTo){
		    	case 'C':
		    		isValid3 = true;
		    		temp = (temp - 32) / 1.8;
			        std::cout << "The temperature in Celsius is: " << temp << " °C";
			        break;
			    case 'K':
			    	isValid3 = true;
			    	temp = (temp - 32) / 1.8 + 273.15;
			        std::cout << "The temperature in Kelvin is: " << temp << " K";
			    	break;
			    default:
			    	std::cout << "Invalid unit entered. ";
			    	isValid3 = false;
			    	std::cin.clear();
			    	std::cin.ignore(1000, '\n');
			}
			}
			}while(isValid3 == false);
	    	break;
	    case 'K':
	    	isValid1 = true;
	    	do{
	    	std::cout << "Enter the temperature in Kelvin: ";
	    	if(std::cin >> temp){
	    		isValid2 = true;
			}
			else{
				isValid2 = false;
				std::cin.clear();
				std::cin.ignore(1000, '\n');
			}	
			}while(isValid2 == false);
		   
		    do{
		    std::cout << "Which unit would you like to convert to?(C or F): ";
		    if(std::cin >> unitTo){
		    	unitTo = toupper(unitTo);
		    	switch(unitTo){
		    		case 'C':
		    			isValid3 = true;
		    			temp = temp - 273.15;
			            std::cout << "The temperature in Celsius is: " << temp << " °C";
			            break;
			        case 'F':
			        	isValid3 = true;
			        	temp =  (temp - 273.15) * 1.8 + 32;
			            std::cout << "The temperature in Fahrenheit is: " << temp << " °F";
			        	break;
			        default:
			        	isValid3 = false;
			        	std::cout << "Invalid unit entered. ";
			        	std::cin.clear();
			        	std::cin.ignore(1000, '\n'); 		
				}
			}	
			}while(isValid3 == false);
		    break;
		default:
			std::cout << "Invalid unit entered. ";
			isValid1 = false;
			std::cin.clear();
			std::cin.ignore(1000, '\n');
	        }
	}
	}while(isValid1 == false);
	return 0;
}