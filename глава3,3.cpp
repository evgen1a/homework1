#include <iostream>
#include <clocale>

using namespace std;


int main() {
	 setlocale (LC_CTYPE, "rus");
float mili;
float gallony;
float a;
cout << "������� ���-�� ����,������� �� ��������:";
cin >> mili;
cout << "������� ���-�� �������� �������,������� �� �������������:";
cin >> gallony;
a=mili/gallony;
cout << "���-�� ���� �� 1 ������="<<a;
	return 0;
}
