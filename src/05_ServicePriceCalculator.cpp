#include <iostream>
#include <iomanip>
using namespace std;
/* Service price calculator. 
1- Price is equal to 100 dollars if the area is less and equal to 100 m2.
2- It costs extra of 20 cents for each additional m2. 
*/
int calculateArea()
{
	int l, w;
	cout<<"enter the length and width of your room: ";
	cin>>l>>w;
	return l * w;
}

double price(int area)
{
	if(area < 100)
		return 99;
	double addCost;
	addCost = 0.20* (area - 100);
	return 99+addCost;
}

int main(int argc, char** argv) {
	int area = calculateArea();
	double cost = price(area);
	cout<<"total cost for your room is : $"<<fixed<<setprecision(3)<<cost<<endl;
	return 0;
}
