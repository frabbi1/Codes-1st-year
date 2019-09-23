#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	
	int i, n, k, st[100], sum;
	int sm[100];
	
	cin>> n >> k;
	for( i=0; i<n; i++ ){
		cin>> st[i];
		sm[i]=st[i];
	}
	
	sort(st, st+n );
	sum = 0;
	

	
	for( i=0; i<n; i++ ){
		sum = sum+st[i];
		if( sum > k ) {
			break;
		}
	}
	
	cout<< i << endl;
	if(!i) return 0;
	int d=i;
	i=0;
	for(int k=0; ; ){
		if( st[i] == sm[k] ){
			cout<< k+1 << " ";
			i++;
			sm[k]=-1;
			k=0;
		}
		else k++;
		if(i==d) break;
	}
	
	return 0;
}
