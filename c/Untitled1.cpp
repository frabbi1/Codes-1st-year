#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int a[5]={1,4,2,6,1};
	sort(a+5,a);
	for(int i=0;i<5;i++){
		cout<<a[i]<<endl;
	}return 0;
}
