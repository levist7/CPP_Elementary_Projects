#include <iostream>
using namespace std;
/* Interest amount calculator for a given set of constants */

int main(int argc, char** argv) {
	double initialamount {1000};
	double rate {.02};
	double time {5};
	double interest;
	interest = initialamount*rate*time;
	cout<<interest<<endl;
	return 0;
}
