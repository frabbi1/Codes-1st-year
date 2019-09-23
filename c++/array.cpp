#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define pf printf
#define sf scanf

int main(){
	
	int n, i, x;
	vector<int> prdct;
	
	cin >> n;
	for(i=0; i<n; i++){
		cin >> x;
		prdct.push_back(x);
	}
	
	for(i=0; i<n; i++){
		if(prdct[i]<0){
			cout << 1 << ' '<< prdct[i] << endl;
			prdct.erase(prdct.begin()+i);
		}
	}
	for(i=0; i<n-1; i++){
		if(prdct[i]>0) {
			cout << 1 << ' '<< prdct[i] << endl;
			prdct.erase(prdct.begin()+i); 
		}
	}
	
	cout << n-2 << ' ';
	for(i=0; i<n-2; i++){
		cout<< prdct[i] << ' ';
	}
	
	return 0;
}

