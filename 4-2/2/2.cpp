#include <iostream>
using namespace std;

void magicSquare(int** arr, int* ptr) {
	int n = *ptr;
	for(int i = 0; i < n/4; i++){
		for(int j = n/4; j < (n/4)*3; j++){
			int temp = arr[i][j];
			arr[i][j] = arr[n-i-1][n-j-1];
			arr[n-i-1][n-j-1] = temp;
		}
	}
	for(int i = n/4; i < n/2; i++){
		for(int j = 0; j < n/4; j++){
			int temp = arr[i][j];
			arr[i][j] = arr[n-i-1][n-j-1];
			arr[n-i-1][n-j-1] = temp;
		}
		for(int j = (n/4)*3; j < n; j++){
			int temp = arr[i][j];
			arr[i][j] = arr[n-i-1][n-j-1];
			arr[n-i-1][n-j-1] = temp;
		}
	}
}

int main() {
        int n;
        cin >> n;
        int* ptr = &n;
        if (n < 3 or n % 4 != 0){
                return 0;
        }

        int** arr = new int*[n];
	int t = 1;

        for(int i = 0; i < n; i++){
                arr[i] = new int[n];
		for(int j = 0; j < n; j++){
			arr[i][j] = t;
			t += 1;
		}
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

