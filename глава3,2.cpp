#include <iostream>
#include <clocale>

using namespace std;


int main() {
	 setlocale (LC_CTYPE, "rus");
float rost_D;
float rost_F;
float ves_F;
float IMT;
cout << "������� ���� ���� � ����� � ������ : ";
cin >> rost_F >> rost_D;
cout << "������� ��� � ������: ";
cin >> ves_F;
const double a=0.0254;
const double b=2.2;
const int c=12;
rost_F= 12*rost_F;
rost_F=rost_F * a;
ves_F=ves_F/b;
IMT= ves_F/rost_F*rost_F;
cout <<"���= "<< IMT;
	return 0;
}
