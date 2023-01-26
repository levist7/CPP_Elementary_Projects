#include <iostream>
using namespace std;

/* Inputing and outputing a given array of input colors */

string getColors()
{
	string cols[7];
	for(int i=1;i<=7;i++)
	{	
		cout<<"Enter colors of arrays: ";
		cin>>cols[i];
	}
	return cols[1];
}
int main(int argc, char** argv) {
	string g[] = getColors();
	for(int i=1; i<=7;i++)
	{
		cout<<colors[i]>>endl;
	};
	return 0;
}
