#include "main.h"

using namespace std;

int main() {
int const MAX_LEN = 100;
char product_name[MAX_LEN] ;
float cost; 
float total = 0; //initializing it here so it only starts zero 
bool done = false;
while (done == false) //we're using a while loop here because it is a perfect toggle
{
cout.setf(ios::fixed, ios::floatfield);
cout.setf(ios::showpoint);
cout.precision(2);

cout << "its a lovely shopper program" << endl;
cout << "input product name: " << endl;
cin >> product_name;
while (!cin)
{
	//clear the error code to return cin back to a working state
	cin.clear();
	cin.ignore(100, '\n');

	cout << "Illegal value, try again";
	cin >> product_name;
}
	cin.ignore(100, '\n');

cout << "input product cost: " << endl;
cin >> cost;
while (!cin)
{
	cin.clear();
	cin.ignore(100, '\n');

	cout << "illegal value, try again";
	cin >> cost;
}


total = total + cost;
cout << "Product name is " << product_name << " cost is " << cost << endl;
cout << "Are you done? (y/n)";
string usrInput;
cin >> usrInput;
if(usrInput == "y")
{
	cout << "total is " << total << endl;
	done = true;
} else 
{
done = false;
}


}
//needs to QA for good types

return 0;
}

