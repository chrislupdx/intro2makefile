#include "main.h"

int main() {
int const MAX_LEN = 100;
char product_name[MAX_LEN] ;
float cost; 
float total = 0; //initializing it here so it only starts zero 
bool done = false;
while (done == false) //we're using a while loop here because it is a perfect toggle
{
std::cout.setf(std::ios::fixed, std::ios::floatfield);
std::cout.setf(std::ios::showpoint);
std::cout.precision(2);

std::cout << "its a lovely shopper program" << std::endl;
std::cout << "input product name: " << std::endl;

std::cin.get(product_name, MAX_LEN, '\n');

	while(!std::cin) //can we actually do that?
	{	
		std::cout << "illegal product name" << std::endl;
		std::cin.clear();
		std::cin.ignore(100, '\n');
		std::cin.get(product_name, MAX_LEN, '\n');
	}

std::cout << "input product cost: " << std::endl;
std::cin >> cost;
	while (!std::cin)
	{
		std::cin.clear();
		std::cin.ignore(100, '\n');
		std::cout << "illegal cost value, try again" << std::endl;
		std::cin >> cost;
	}
total = total + cost;
std::cout << "Product name is " << product_name << " cost is " << cost << std::endl;
std::cout << "Are you done? (y/n)";
std::string usrInput;
std::cin >> usrInput;
	if(usrInput == "y")
	{
		std::cout << "total is " << total << std::endl;
		done = true;
	} else 
	{
		done = false;
	}
std::cin.clear();
std::cin.ignore(100, '\n');
}

return 0;
}

