#include "cal.h"
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(int argc, char *argv[]){
	int number1;
	int number2;

	std::cout << "number 1: " << argv[1] << ", number 2: " << argv[2] << std::endl;

	number1 = atoi(argv[1]); //char * -> int//	
	number2 = atoi(argv[2]);

	Cal cal; //Object create//

	cal.process(number1, number2);
}
