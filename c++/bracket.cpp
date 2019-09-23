#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--){
		string st;
		cin >> st;
		int c1=0, c2=0;
		
		int len = st.length();
		
		for( int i=0; i<len; i++ ){
			if( st[i]=='(' ) c1++;
			else if( st[i]==')' ) c1--;
			else if( st[i]=='[' ) c2++;
			else if( st[i]==']' ) c2--;
			
			if( c1 < 0 || c2 < 0 ) {
				break;
			}
		}
		if(c1==0 && c2==0 ) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}