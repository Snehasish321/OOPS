#include<iostream>
#include<cmath>
using namespace std ;

int main () {
	int n ;
	cin >> n ;
	int sum = 0 ;
	int org = n ;
	while (n>0) {
		int lastDig ;
		lastDig = n%10 ;
		sum += pow(lastDig,3) ;
		n=n/10;
	}
	if (sum == org ) {
		cout << "Armstrong num "<< endl ;
	} else {
		cout << " Not an Armstrong number " << endl ;
	}
	return 0 ;
}
