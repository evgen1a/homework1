#include <iostream>

using namespace std;
 void fun (float a)
 {
 	float b;
 	b = 1.8 * a + 32.0;
 	cout<< a << " degrees Celsius is " << b   <<" degrees Fahnrenheit"; 
 }




int main() {
float a;
cout << "Please enter a Celsius value:";
cin >> a;
 fun(a);

	return 0;
}
