#include <iostream>
using namespace std;

int main() {
  
	double day;
	cin >> day;
	double eve;
	cin >> eve;
	double wee;
	cin >> wee;
	double a = (day * 0.25) + (eve * 0.15) + (wee * 0.2);
  double b = (day * 0.45) + (eve * 0.35) + (wee * 0.25);

	for (int i = 0; i < day && i < 100; i++) {
		a-= 0.25;
	}
	for (int i = 0; i < day && i < 250; i++) {
		b-= 0.45;
	}

	cout << "Plan A costs " << a << endl;
	cout << "Plan B costs " << b << endl;
	int aa = a;
	int bb = b;
	if (aa > bb) {
		cout << "Plan B is cheapest." << endl;
	} else if (aa < bb) {
		cout << "Plan A is cheapest." << endl;
	} else {
		cout << "Plan A and B are the same price." << endl;
	}

	return 0;
}
