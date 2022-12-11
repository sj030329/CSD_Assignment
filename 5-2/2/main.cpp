#include <iostream>
#include <cstdlib>
#include "minmax.h"
using namespace std;

int main(int argc, char **argv){
	int n = argc - 1;
	int* arr = new int[n];
	for (int i = 1; i < argc; i++){
		arr[i-1] = atoi(argv[i]);
	}
	int min = atoi(argv[1]);
	int* pmin = &min;
	int max = atoi(argv[1]);
	int* pmax = &max;
	getMinMax(arr, n, *pmin, *pmax);
	cout << "min: " << min << endl;
	cout << "max: " << max << endl;
	delete[] arr;
	return 0;
}
