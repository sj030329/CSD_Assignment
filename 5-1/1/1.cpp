#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, const char **argv){
	for (int i = 0; i<atoi(argv[2]); i++){
		cout << argv[1] << endl;
	}
	return 0;
}
