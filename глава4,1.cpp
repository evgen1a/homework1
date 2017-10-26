#include <iostream>
#include <string>

using namespace std;

int main() {
     struct name{
        string Fname; 
        string Lname; 
        char grade; 
        short age;
	 };
name person;
	
	cout<< "what is your first name?";
	getline(cin,person.Fname);
	cout<<"What is your last name?";
	getline(cin,person.Lname);
	cout << "what letter grade do you deserve?";
	cin>>person.grade ;
	cout << "what is your age?";
    cin>>person.age;
		cout << "Name:"<< person.Lname<<"," << person.Fname << endl<< "Grade:" << person.grade<<endl<<"Age:"<< person.age;

	return 0;
}
