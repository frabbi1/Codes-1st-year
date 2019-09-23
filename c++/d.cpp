#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define pf printf
#define sf scanf

int main(){
	
	ll n, ar1[100000], ar2[100000], x;
	
	cin >> n;
	
	for( ll i=0; i<n; i++ ){
		cin >> ar1[i];
	}
	sort(ar1, ar1+n );
	for(ll i=0; i<n-1; i++){
		cin >> ar2[i];
	}
	sort(ar2, ar2+n-1);
	ar2[n-1]=-1;
	
	for( ll i=0; i<n; i++){
		if(ar1[i]!=ar2[i]) {
			x=ar1[i];
			break;
		}
	}
	
	for(ll i=0; i<n-2; i++){
		cin >> ar1[i];
	}
	sort(ar1, ar1+n-2);
	ar1[n-2]=-1;
	ar1[n-1]=-1;
	
	
	for( ll i=0; i<n; i++){
		if(ar2[i]!=ar1[i]) {
			cout << x << endl << ar2[i] << endl;
			break;
		}
	}
	return 0;
}

