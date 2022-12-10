#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct
{
	string name;
	double score;
} Person;

int main(int argc, const char **argv) {
	int n = (argc-1)/2;
	Person *arr = new Person[n];
	for (int i = 0; i < n; i++){
		int k = (2*i) + 1;
		int k2 = k + 1;
		arr[i].name = argv[k];
		arr[i].score = atof(argv[k2]);
	}
	for (int i = 0; i < n; i++){
		cout << "Name:" << arr[i].name << ", Score:" << arr[i].score << endl;
	}
	delete[] arr;
	return 0;
}
