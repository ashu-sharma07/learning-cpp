#include <iostream>
using namespace std;

void selection_sort(int arr[], int size){
	int min_index;
	for (int i = 0; i<size-1; i++){
		min_index = i;
		for (int j = i+1; j<size; j++){
			if (arr[j]<arr[min_index]){
			   min_index = j;	
			}
		}
		int temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
	}
}

int main(){
	int size;
	int arr[10000];
	cin >> size;
	for (int i = 0; i<size; i++){
		cin >> arr[i];
	}
	selection_sort(arr, size);
	for (int i=0; i<size; i++){
		cout << arr[i] << ' ';
	}
	cout << endl;
}
