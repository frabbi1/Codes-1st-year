#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define pf printf
#define sf scanf

int main(){
	
	int ans = 0, c = 0, n, i;
	
	cin >> n;
	
	for(i=1; ;i++){
		c = c+i;
		ans = ans+c;
		if(ans > n ) break;
	}
	
	cout << i-1;
	return 0;
}


