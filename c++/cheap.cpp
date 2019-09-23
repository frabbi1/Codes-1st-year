#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define pf printf
#define sf scanf

int main(){
	
	ll n, m, a, b;
	
	cin >> n >> m >> a >> b;
	
	ll cost  = m*a;
	if( cost <= b ) cout << n*a;
	else{
		ll minCost1 = (n/m)*b + (n-m*(n/m))*a;
		ll minCost2 = (n/m)*b + b;
		
		cout << min(minCost1, minCost2);
	}
	
	return 0;
}

