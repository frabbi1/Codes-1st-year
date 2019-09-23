#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define pf printf
#define sf scanf

int main(){
	
	ll n;
	cin >> n;
	if( n%2 ) cout << (n/2+1)*n - n/2 << endl;
	else cout << n*n/2 << endl;
	
	for( ll i=0; i<n; i++ ){
		for(ll j=0; j<n; j++){
			if( !(i%2) && !(j%2) ) pf("C");
			else if( (i%2) && (j%2) ) pf("C");
			else pf(".");
		}
		cout << endl;
	}
	
	return 0;
}

