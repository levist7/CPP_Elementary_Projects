#include <iostream>
using namespace std;

/* Account balance calculator.
1- Ask the user whether to choose checking or saving account
2- Ask the user to input current balance, deposit and withdrawal amount 
3- Calculate balance = balance + deposits - withdrawals 
4- Print the resulted amount. */

int main(int argc, char** argv) {
	int choice=1;
	char accountType;
	bool checking = false, savings = true;
	double balance, deposits, withdrawals;
	cout<<"Enter c for checking or s for savings";
	cin>>accountType;
	if(accountType == 'c'|| accountType =='C')
		checking = true;
	else if (accountType = 's'|| accountType =='S')
		savings = true;
	else
		{
			cout <<"Invalid Account Type";
			return 1;
		}
	cout << "Enter current balance: ";
	cin >> balance;
	cout << "Enter deposits: ";
	cin >> deposits;
	cout<<"Enter withdrawals: ";
	cin >> withdrawals;
	balance = balance + deposits - withdrawals;
	if (checking == true)
		cout<<"Your checking account balance is now: $"<<balance<<endl;
	else if(savings)
		cout<<"Your savings account balance is now: $"<<balance<<endl;
	return 0;
}
