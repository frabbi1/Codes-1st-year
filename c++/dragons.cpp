#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define pf printf
#define sf scanf

int main(){
	
	ll s, n, x[1000], y[1000], i, z, ans;
	
	cin >> s >> n;
	for(i=0; i<n; i++){
		cin >> x[i] >> z;
		y[x[i]] = z;
	}
	
	sort(x, x+n);
	ans = 0;
	for(i=0;i<n;i++){
		if(s>=x[i]) {
			s = s+y[x[i]];
			ans++;
		}
		else break;
	}
	
	if(ans == n ) cout <<"YES";
	else cout << "NO";
	
	return 0; 
	
}

