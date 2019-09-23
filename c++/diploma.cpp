#include<iostream>
using namespace std;

int main(){
	
	long long n, k, x;
	
	cin>> n >> k;
	x=n/2;
	x=x/(k+1);
	
	cout<< x <<" "<< k*x << " "<<n-(x+k*x);
	
	return 0;
}
