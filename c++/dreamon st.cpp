#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define pf printf
#define sf scanf

int main(){
	
	int n, m, i, k;
	
	cin >> n >> m;
	
	if(n<m) {
		cout << -1;
		return 0;
	}
	
	k= n/2;
	if(n%2) k++;
	
	for(i=k;;i++){
		if(i%m==0) break;
	}
	
	cout << i;
	return 0;
	
}

