#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int x,  fl=0;
		cin >> x;
		int boundary = sqrt(x);
		if( x==2 || x==3 ){
			cout << "Prime"<< endl;
			continue;
		}
		else if( x==1 ) {
			cout << "neither prime nor composite" << endl;
			continue;
		}
		else if( x%2==0 ){
			cout << "not Prime" << endl;
			continue;
		}
		for( int i=3; i<=boundary; i += 2 ){
			if(x%i==0){
				cout << "not prime" << endl;
				fl=1;
				break;
			}
		}
		if(!fl) cout << "Prime"<< endl;
		fl=0;
	}
	return 0;
}