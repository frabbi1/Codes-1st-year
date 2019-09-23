#include<iostream>
#include<string>

using namespace std;
#define ll long long
string seat[1000];
void printrow(ll n){
	for( ll i=0; i<n; i++){
		cout << seat[i] << endl;
	}
}

int main(){
	
	ll n;
	
	cin>> n;
	
	for( ll i=0; i<n; i++ ){
		cin >> seat[i];
	}
	ll fl = 0;
	for( ll i=0; i<n; i++ ){
		for( ll j=0; j<4; j++ ){
			if( seat[i][j] == 'O' && seat[i][j+1] == 'O' ){
				seat[i][j] = '+';
				seat[i][j+1] = '+';
				fl=1;
				break;
			}
		}
		if(fl) break;
	}
	
	if(fl){
		cout << "YES" << endl;
		printrow(n);
	}
	else cout << "NO";
	
	return 0;
}
