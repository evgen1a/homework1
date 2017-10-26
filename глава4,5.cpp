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
cout<< "Введите диаметр пиццы:";
cin >> accounting->diametre; 
cout <<"Введите название компании:";
cin >> accounting->namecompany; 
cout<<"Введите вес пиццы:";
cin >> accounting->weight; 

cout <<"Диаметр пиццы:"<< accounting->diametre << endl <<"Название компании:"<< accounting->namecompany <<endl<< "Вес пиццы:"<< accounting->weight; 
return 0; 
}
