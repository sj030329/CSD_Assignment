#include <iostream>
using namespace std;

void magicSquare(int** arr, int* ptr) {
	int n = *ptr;
	int temp = 1;
	int row = 0;
	int column = (n-1)/2;
	while (temp < (n*n)+1)
	{
		if (arr[row][column] == 0)
		{
			arr[row][column] = temp;
		}
		else
		{
			if (row == (n-1))
			{row = 1;}
			else
			{row += 2;}
			if (column == 0)
			{column = (n-1);}
			else
			{column -= 1;}
			arr[row][column] = temp;
		}
		temp += 1;
		if (row == 0)
		{row = (n-1);}
		else
		{row -= 1;}
		if (column == (n-1))
		{column = 0;}
		else {column += 1;}
	}
}

int main() {
	int n;
	cin >> n;
	int* ptr = &n;
	if (n < 3 or n % 2 == 0){
		return 0;
	}

	int** arr = new int*[n];

	for(int i = 0; i < n; i++){
		arr[i] = new int[n];
	}
	magicSquare(arr, ptr);

	for(int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	for(int i = 0; i < n; i++){
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}
