#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define pf printf
#define sf scanf

int main(){
	
	ll n;
	
	cin >> n;
	
	ll a = sqrt(n);
	if( a*a == n ) {
		cout << a << ' ' << a;
	}
	
	else {
		ll prev=n, now;
		ll i;
		for( i=1; i<=n; i++ ){
			if( n%i == 0 ) {
				now=abs(i-n/i);
				if(now==prev) break;
				else prev=now;
			}
		
		}
		cout << n/i << ' ' << i;	
	}

	return 0; 
}

