#include "main.h"

using namespace std;

int main() {
string product_name;
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

cout << "input product cost: " << endl;
cin >> cost;
total = total + cost;
cout << "Product name is " << product_name << " cost is " << cost << endl;
cout << "total is " << total << endl;
cout << "Are you done? (y/n)";
string usrInput;
cin >> usrInput;
if(usrInput == "y")
{
	done = true;
} else 
{
done = false;
}


}

//add decimales and show them
//needs to QA for good types
//upon grand total, needs to be copmleted


return 0;
}

