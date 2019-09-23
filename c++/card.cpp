#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define pf printf
#define sf scanf

int main(){
	
	ll n, card[1000];
	cin >> n;
	ll sum = 0;
	for( ll i=0; i<n; i++ ){
		cin >> card[i];
		sum += card[i];
	}
	
	ll target = sum/(n/2);
	ll p=0;
	
	for( ll i=0; i<n; i++ ){
		for( ll j=i+1; j<n; j++ ){
			if(card[j] == target - card[i]){
				cout << i+1 <<' ' << j+1 << endl;
				card[j]=-99;
				p++;
				break;
			}
		}
		if( p == n/2 ) break;
	}
	
	return 0;
	
}

