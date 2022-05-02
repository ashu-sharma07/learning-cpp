#include <iostream>
using namespace std;

void SelectionSort(int arr[], int size){
	int min_index, temp;
	for (int i = 0; i<size-1; i++){
		min_index = i;
		for (int j=i+1; j<size; j++){
			if (arr[j]<arr[min_index]){
				min_index = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
	}
}

int main(){
	int arr[1000];
	int size;
	cin >> size;
	for (int i=0; i<size; i++){
		cin >> arr[i];
	}
	SelectionSort(arr, size);
	for (int i = 0; i<size; i++){
		cout << arr[i] << ' ';
	}
	cout << endl;
}
