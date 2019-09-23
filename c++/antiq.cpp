#include<iostream>
using namespace std;

int main(){
	
	long long n, v, fl, l=0;
	long long k, s, i, cnt=0;
	long long  slr[50];
	
	cin>> n >> v;
	for( i=1; i<=n; i++ ){
		
		cin>> k; fl=1;
		for( long long j=0; j<k; j++ ){
			cin>> s;
			if( v>s && fl ) {
				cnt++;
				fl=0;
				slr[l]=i;
				l++;
			}
		}
	}
	
	cout<< cnt << endl;
	for( i=0; i<l; i++ ){
		cout<< slr[i] << " ";
	}
	
	return 0;
}
