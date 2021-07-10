#include "gcd.hpp"

double sin (long double a, long double b);
double cos (long double a, long double b);
double tan (long double a, long double b);
int main(){
	string type;
	int degree;
	cout << "Please, enter your type" << endl;
	cin >> type;
	assert(type=="sin" || type=="cos" || type=="tan");
	cout << "Please, enter your degree" << endl;
	cin >> degree;


	if (type =="sin"){
	cout << sin (degree,10) << endl;
	} else if(type == "cos"){
		cout << cos (degree,10) << endl;
	} else if(type == "tan"){
		cout << tan (degree,10) << endl;
	}
}
