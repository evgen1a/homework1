#include <iostream>
#include <string>

using namespace std;


int main() {
	struct CandyBar{
        string name; 
        float ves; 
        int kalorii;
	 };
	 CandyBar snack[3]={{"Raffaello",2.5,250},{"Ra4ki",1.6,180},{"Mersi",5.1,360}};
	 cout << snack[0].name <<"  "<< snack[0].ves <<"  "<< snack[0].kalorii << endl;
	 cout << snack[1].name <<"  "<< snack[1].ves <<"  "<< snack[1].kalorii<< endl;
	 cout << snack[2].name <<"  "<< snack[2].ves <<"  "<< snack[2].kalorii;
	return 0;
}
