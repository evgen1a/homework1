#include <iostream>
#include <clocale>

using namespace std;


int main() {
	 setlocale (LC_CTYPE, "rus");
float rost_D;
float rost_F;
float ves_F;
float IMT;
cout << "¬ведите свой рост в футах и дюймах : ";
cin >> rost_F >> rost_D;
cout << "¬ведите вес в фунтах: ";
cin >> ves_F;
const double a=0.0254;
const double b=2.2;
const int c=12;
rost_F= 12*rost_F;
rost_F=rost_F * a;
ves_F=ves_F/b;
IMT= ves_F/rost_F*rost_F;
cout <<"»ѕ“= "<< IMT;
	return 0;
}
