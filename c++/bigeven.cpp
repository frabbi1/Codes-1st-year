#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define pf printf
#define sf scanf

int main(){

	ll ar[100000];
	ll n;
	
	cin >> n;
	ll sum =0;
	
	for( int i=0; i<n; i++ ){
		cin >> ar[i];
		sum += ar[i];
	}
	if( sum%2 ){
		int i;
		sort(ar, ar+n);
		for( i=0; i<n; i++ ) if(ar[i]%2) break;
		sum = sum-ar[i];
		
	}
	cout << sum;
	return 0;
}


