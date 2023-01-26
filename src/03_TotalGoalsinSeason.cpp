#include <iostream>
#include <string>
using namespace  std;
/* Total goals in a season*/ 

int main(int argc, char** argv) {
	int totGoals=0;
	int goals, game = 1;
	while(goals>=0)
	{
		cout<<"Enter match score for the game number "<<game<<": (-5 to end) ";
		cin>>goals;
		if(goals < 0)
			break;
		totGoals += goals;
		game++;
	}
	cout<<"Total of match goals is "<< totGoals<<endl;
	return 0;
}
