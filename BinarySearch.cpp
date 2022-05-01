#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int x){
	int l = 0;
	int u = size-1;
	int m;
	while (l<=u){
	m = (l+m)/2;
	if (arr[m]==x){
	    return m;
	}
	else if (x<arr[m]){
		u = m-1;
	}
	else{
	    l = m + 1;
	}
	
	}

	return -1;
}

int main(){
	int arr[10000];
	int size, x;
	cin >> size;
	for (int i = 0; i<size; i++){
		cin >> arr[i];
	}
	cin >> x;
	cout << BinarySearch(arr, size, x) << endl;
}
