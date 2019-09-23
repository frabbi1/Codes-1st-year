#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define pf printf
#define sf scanf

int main(){
	
	ll t, n, x, ans;
	
	cin >> t;
	
	for(ll i=0; i<t; i++){
		ans=0;
		cin >> n;
		for(ll j=0; j<n; j++){
			cin >> x;
			if(x<=0) x=0;
			ans = ans + x;
		}
		cout << "Case "<< i+1 <<": " << ans << endl;
	}
	
	return 0;
}

