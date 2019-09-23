#include<iostream>
using namespace std;

int main(){
	
	int a, b, i, j,fl=0;
	char x;
	
	cin>> a >> b;
	
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			cin >> x;
			if( x=='C' || x=='M' || x=='Y' ) fl=1;
		}
	}
	
	if(fl) cout<< "#Color";
	else cout<< "#Black&White";
	
	return 0;
}
