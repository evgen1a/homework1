#include <iostream> 
#include <clocale>

using namespace std; 

int main() 
{ 
setlocale (LC_CTYPE,"rus");

struct pizza { 
string namecompany; 
float diametre; 
float weight; 
}; 
pizza *accounting = new pizza; 
cout<< "������� ������� �����:";
cin >> accounting->diametre; 
cout <<"������� �������� ��������:";
cin >> accounting->namecompany; 
cout<<"������� ��� �����:";
cin >> accounting->weight; 

cout <<"������� �����:"<< accounting->diametre << endl <<"�������� ��������:"<< accounting->namecompany <<endl<< "��� �����:"<< accounting->weight; 
return 0; 
}
