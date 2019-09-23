#include<iostream>
#include<algorithm>

using namespace std;

long long x[1000000]={}, y[1000000]={}, n, z[1000000],r=0 ,u=0;

void fn( long long a){
	long long j;
	for(j=0;j<n;j++){
		if(a==z[j]) {
			r++;
			x[j]=r;
		}
		else x[j]=r;
		//cout<< x[j] <<endl << j << endl;
	}
}

long long fn1(long long w){
	long long b;
	for(b=0;b<n;b++){
		if(w==z[b]){
			u++;
			y[b]=u;
		}
		else y[b]=u;
	//	cout<< y[b] << " " << b << endl;
		if(y[b]>=x[b]) continue;
		else {
			u=0;
			return 1;
		}
	}
	return 2;
}


int main(){
	
	long long a, p=0, i;
	
	
	cin>> n >> a;
	for(i=0; i<n; i++){
		cin>> z[i];
	}
	fn(a);
	for(i=0;i<n;i++){
		if(z[i]!=a) p=fn1(z[i]);
		if(p==1) continue;
		else if(p==2) {
			cout << z[i];
			break;
		}
	}
	if(p==1 || p==0) cout<< "-1";
	//cout<< t;
	
	return 0;
	
	
} 
