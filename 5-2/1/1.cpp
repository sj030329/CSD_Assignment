#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char **argv) {
	string s = "";
	int n = 0;
	for (int i = 1; i < argc; i++){
		if (atoi(argv[i]) == 0){
			s += argv[i];
		}
		else {
			n += atoi(argv[i]);
		}
	}
	cout << s << endl;
	cout << n << endl;
	return 0;
}
