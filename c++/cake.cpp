#include<iostream>
#include<string>
using namespace std;

int main(){
	
	int r,c, fl=1,i,j;
	string st[10];
	int cnt1=0, cnt2=0;
	
	cin>> r >> c;
	for(i=0; i<r; i++){
		cin>> st[i];
	}
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			if(st[i][j]=='S') {
				fl=0;
				break;
			}
			fl=1;
		}
		if(fl) cnt1++;
	}
	fl=1;
	for(i=0; i<c; i++){
		for(j=0; j<r; j++){
			if(st[j][i]=='S') {
				fl=0;
				break;
			}
			fl=1;
		}
		if(fl) cnt2++;
	}
	int x = cnt1*c;
	int y = cnt2*r;
	int ans = x+y-(cnt1*cnt2);
	
	cout<< ans;
	
	return 0;
}
