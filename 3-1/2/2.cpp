#include <iostream>

using namespace std;

int main() {
        std::string str1, str2;
	std::cin >> str1;
	std::cin >> str2;
	string str3 = str1 + str2;
        cout << str3 << endl;
	cout << str1[0] << endl;
	int n = str2.length();
	cout << str2[n-1] << endl;
        return 0;
}

