#include <iostream>
using namespace std;


int main() {
float rost_D;
float rost_F;
cout << "Vvedite svoi rost v dyimax: ";
cin >> rost_D;
const double a=1./12;
rost_F=a * rost_D;
cout << "rost v dyimax: " << rost_D << "\nrost v fyntax: " << rost_F;
	return 0;
}
