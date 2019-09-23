#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define pf printf
#define sf scanf

int main(){
	
	int i, n, A=0, D=0;
	char ch;
	
	cin >> n;
	for(i=0; i<n; i++){
		cin >> ch;
		if(ch=='A') A++;
		else D++;
	}
	
	if(A>D) cout<< "Anton";
	else if(A<D) cout << "Danik";
	else cout << "Friendship";
	
	return 0;
}


