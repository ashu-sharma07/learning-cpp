#include <iostream>
using namespace std;
void BubbleSort(int arr[], int size){
	int temp;
	for (int i =0; i<size-1; i++){
		for (int j=0; j<size-i-1; j++){
			if ( arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
}

}

}

int main(){
	cout << "Bubble Sort" << endl;
	int arr[1000];
	int size;
	cin >> size;
	for (int i = 0; i<size; i++){
		cin >> arr[i];
	}

	BubbleSort(arr, size);

	for (int i = 0; i<size; i++){
		cout << arr[i] << ' ';
	}

	cout << endl;
	return 0;
}
