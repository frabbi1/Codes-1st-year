#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define pf printf
#define sf scanf

ll gcd( ll x, ll y ){
	ll h = max( x, y );
	ll l = min( x, y );
	
	if(h%l) gcd( l, h%l);
	else return l;
}

int main(){
	
	ll n, a[100];
	
	cin >> n;
	
	int fl=1;
	
	for(ll i=0; i<n; i++){
		
		cin >> a[i];
		if( a[i]%2 && fl) fl = 0;
	}
	
	ll mx = *max_element(a, a+n);
	
	if( fl == 1 ){
		
		ll factor =  gcd( a[0], a[1] );
		
		for(ll i=2; i<n; i++){
			factor = gcd( factor, a[i] );
		}
		
		 mx = mx/factor;
	}


	if( (mx-n)%2 ) pf("Alice");
	else pf("Bob");
	
	return 0;
}

