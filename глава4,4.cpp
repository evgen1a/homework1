#include <iostream>
#include <string>
#include <clocale>

using namespace std;


int main() {
	setlocale(LC_CTYPE,"rus");
	struct pizza{
        string name; 
        float diametr; 
        float ves;
	 };
       pizza vvod; 
       getline(cin,vvod.name);
       cin>>vvod.diametr;
       cin>>vvod.ves;
       cout << "Имя компании:"<<vvod.name<<endl<<"Диаметр:"<<vvod.diametr<<endl<<"Вес:"<<vvod.ves;
	return 0;
}
