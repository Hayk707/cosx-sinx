#include "gcd.hpp"

int factorial (int n){
	int pat=1;
	for (int i=1; i<=n; i++) {
		pat=pat * i;
	}
	return pat;
}
double cos (long double x, long double precision){
		double patas=0;
	while( x > 180 || x < 0) {
		if(x > 180) {
			x -= 180;
			x *= -1;
		} else{
			x += 180;
			x *= -1;
		}
		x=x*M_PI/180;
		for (int i = 0; i<=precision; i++) {
			int k = 2*i;
			patas += pow(-1, i) * pow(x, k) / factorial(k);
		}
	
	}
	return patas;
}


int factorials (int n){
	int pat = 1;
	for (int i=1; i<=n; i++) {
		pat=pat * i;
	}
	return pat;
}
double sin (long double x, long double precision){
	while (x > 90 || x < -90){
		if( x > 90){
			x -= 180;
		} else {
			x += 180;
		}
	}

	x=x*M_PI/180;
	double patas=0;
	for (int i = 0; i<=precision; i++) {
		int k = 2*i + 1;
		patas += pow(-1, i) * pow(x, k) / factorials(k);
	}
	return patas;
}

double tan(long double x, long double precision){
	long long z;
	z=sin(x, precision)/cos(x,precision);
	return z;
}
