#include<iostream>

using namespace std;

int *arr;
int size;

void printArray(){
	
	for( int i=0; i<size; i++) cout << arr[i] << '\t' ;
}

int binarySearch(int  element ){
	
	int index= -1;
	int low = 0, high = size;
	
	while( low<=high ){
		int mid = (low+high)/2;
		
		if( arr[mid] == element ) {
			index = mid;
			break;
		}
		else if( arr[mid] < element ) low = mid+1;
		else high = mid-1;	
	} 
	
	if( index!=-1 ){
		while( index>0 && arr[index]==arr[index-1]){
			index--;
		}
	}
	
	return index;
}
void initializeArray(){
	
	
	cout << "size: ";
	cin >> size;
	
	arr = new int[size];
	
	for( int i=0; i<size; i++ ){
		cin >> arr[i];
	}
}

int main(){
	
	initializeArray();
	
	int element;
	cin >> element;
	
	int index = binarySearch( element );
	
	printArray();
	
	if( index == -1 ) cout << endl << "OOPs not found \n";
	else cout <<endl << "found element "<< element << " at index: " << index << endl;
	
	delete [] arr;
	return 0;
	
}
