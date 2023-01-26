#include <iostream>
#include <iomanip>
using namespace std;
/* Calculating cost and commission amount and creating a table looking output*/ 

int main(int argc, char** argv) {
	string lName;
	const double commission{.06};
	const double listingAgent{.015};
	double salesprice, sellerCost, agentsCommission;
	cout<<"Enter homeowners last name: ";
	cin>>lName;
	cout<<"Enter the sales price for the house: (no commas or decimal points)";
	cin>>salesprice;
	sellingCost = commission*salesprice;
	agentsCommission = listingAgent*salesprice;
	cout<<"\tOwner Name\tHome Price\tSelling Cost\tAgent's Commission\n";
	cout<<"\t"<<left<<setw(16)<<lName<<"$"<<salesprice<<"\t\t$"<<sellingCost<<"\t\t$"<<agentsCommission<<endl;
	return 0;
}
