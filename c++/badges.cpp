#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	
	int n, b, x[3001], c=0, i;
	
	cin>> n ;
	for(i=0;i<n;i++){
		cin>>x[i];
	}
	sort(x,x+n);
	for(i=0;i<n-1;i++) {
		if(x[i]==x[i+1]){
			x[i+1]++;
			cout<< x[i+1] << endl;
			c++;
		}
	}
	cout<< c;
	
	return 0;
}
