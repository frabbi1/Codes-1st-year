#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define pf printf
#define sf scanf

int main(){
	
	ll n, sol[100000];
	
	cin >> n;
	for( int i=0; i<n; i++ ){
		cin >> sol[i];
	}
	
	sort(sol, sol+n );
	
	//for(int i=0; i<n; i++) cout << sol[i] << endl;
	
	int p = sol[0];
	int cnt = 0;
	
	for( int i=0; i<n; i++ ){
		if(p<sol[i]) p=sol[i];
		if( sol[i] != p ) {
			cnt = cnt+(p-sol[i]);
		}
		p++;
	}
	
	cout << cnt;
	
	return 0;
}

