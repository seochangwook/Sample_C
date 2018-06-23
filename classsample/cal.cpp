#include "cal.h"
#include<iostream>

using namespace std;
/////////////////////////////////////
Cal::Cal(){
	std::cout << "Cal program" << std::endl;
}
//////////////////////////////////////
void Cal::process(int number1, int number2){
	result = number1 + number2;
	std::cout << "result: " << result << std::endl;
}

