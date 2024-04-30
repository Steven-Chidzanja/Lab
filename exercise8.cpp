#include <iostream>

using namespace std;

int main(){

    int numRows ,numColumns;
    int num = 0;
    cout << "Enter number of Rows: " ;
    cin >> numRows;

    if (numRows > 3 || numRows <1){
        cout << "Invalid Input Entered: " << numRows << endl;
    }

    cout <<"Enter number of Columns: ";
    cin >> numColumns;
    if (numColumns > 3 || numColumns <1){
        cout << "Invalid Input Entered: " << numColumns << endl;
    }

    int* arr = new int[numRows * numColumns];
    cout << "Enter the elements of the array:" << endl;
	for (int i = 0; i < numRows; i++) {
		for (int j = 0; j < numColumns; j++) {
			*(arr + i * numColumns + j) = ++num;
			cout << "Enter element [" << i << "][" << j << "]: ";
			cin >> arr[numRows * numColumns];
		}
	}

    cout << "The array you entered is:" << endl;
	for (int i = 0; i < numRows; i++) {
		for (int j = 0; j < numColumns; j++) {

			cout << *(arr + i * numColumns + j)
				<< " ";
		}
		cout << endl;
	}

	//Delete the array created
	delete[] arr;
    return 0;
}
