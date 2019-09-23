#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define pf printf
#define sf scanf

int main(){
	
	ll A, B;
	cin >> A >> B;
	ll k, m;
	cin >> k >> m;
	
	ll ar[100000];
	
	for( ll i=0; i<A; i++ ) cin >> ar[i];
	ll  x;
	cin >> m;
	
	for( ll i=0; i<B-1; i++ ) cin >> x;
	x=0;
	for( ll i=0; i<A; i++ ) if(ar[i]<m) x++;
	
	if(k>x) cout << "NO" << endl;
	else cout << "YES";
	
	return 0;
}

