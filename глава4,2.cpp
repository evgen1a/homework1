#include <iostream>
#include <string>

using namespace std;


int main() {
	struct CandyBar{
        string name; 
        float ves; 
        int kalorii;
	 };
	CandyBar snack;
	snack.name="Mocha Munch";
	snack.ves=2.3;
	snack.kalorii=350;
	cout << snack.name<< endl<< snack.ves <<endl<< snack.kalorii;
	return 0;
}
