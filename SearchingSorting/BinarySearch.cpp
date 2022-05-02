#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int x){
	int l = 0;
	int u = size-1;
	int m;
	while (l<=u){
	m = (l+u)/2;
	if (x==arr[m]){
	return m;	
	}
	else if (x<arr[m]){
	   u = m - 1;
	}
	else{
	  l = m + 1;
	}
	}
	return -1;
}

int main(){
	int size;
	cin >> size;
	int arr[1000];
	for (int i=0; i<size; i++){
		cin >> arr[i];
	}
	int x;
	cin >> x;
	int ans = BinarySearch(arr, size, x);
	cout << ans << endl;
}
