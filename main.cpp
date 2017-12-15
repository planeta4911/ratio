#include <iostream>
#include <string>
#include "Head.h"


//RATIO


int main()
{
	Ratio r1(2, 3);
	Ratio r2(4, 3);
	std::cout << (r1 != r2) << std::endl;
	std::cout << (r1 ^ 3) << std::endl;
	std::cout << ~r1 << std::endl;
	system("PAUSE");
	return 0;
} 


