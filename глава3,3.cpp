#include <iostream>
#include <clocale>

using namespace std;


int main() {
	 setlocale (LC_CTYPE, "rus");
float mili;
float gallony;
float a;
cout << "¬ведите кол-во миль,которое вы проехали:";
cin >> mili;
cout << "¬ведите кол-во галлонов бензина,которое вы израсходовали:";
cin >> gallony;
a=mili/gallony;
cout << "кол-во миль на 1 галлон="<<a;
	return 0;
}
