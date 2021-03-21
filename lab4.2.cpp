#include <math.h>
#include <iostream>
#include <ctime> 
using namespace std;
#include <iostream>

int main()
{
	srand(time(0));
	int time = rand() % 24;
	cout << time << endl;
	if (time < 10) {
		cout << "Good morning.";
	}
	else if (time < 20) {
		cout << "Good day.";
	}
	else {
		cout << "Good evening.";
	}
	cin >> time;
}