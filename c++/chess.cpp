#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string st[8];
	int i,j;
	int cnt1=0, cnt2=0;
	
	for(i=0; i<8; i++){
		cin>> st[i];
	}
	
	for( i=0; i<8; i++ ){
		for( j=0; j<8; j++ ){
			if(st[i][j]=='q') cnt1=cnt1+9;
			else if( st[i][j]=='Q') cnt2=cnt2+9;
			else if( st[i][j]=='r') cnt1=cnt1+5;
			else if( st[i][j]=='R') cnt2=cnt2+5;
			else if( st[i][j]=='b') cnt1=cnt1+3;
			else if( st[i][j]=='B') cnt2=cnt2+3;
			else if( st[i][j]=='n') cnt1=cnt1+3;
			else if( st[i][j]=='N') cnt2=cnt2+3;
			else if( st[i][j]=='p') cnt1=cnt1+1;
			else if( st[i][j]=='P') cnt2=cnt2+1;
		}
	}
	
	if( cnt1>cnt2 ) cout<< "Black";
	else if( cnt1<cnt2 ) cout<< "White";
	else cout<< "Draw";
	
	return 0;
	
}
