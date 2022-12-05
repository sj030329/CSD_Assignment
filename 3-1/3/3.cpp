#include <iostream>

using namespace std;

int add(int a, int b) {
	return a + b;
}

std::string add(std::string a, std::string b) {
	return a + "-" + b;
}

float add(float a, float b = 0.9) {
	return a + b;
}

int main() {
	int a, b;
	std::string str1, str2;
	float c;
	std::cin >> a >> b >> str1 >> str2 >> c;
	cout << add(a,b) << endl;
	cout << add(str1, str2) << endl;
	cout << add(c) << endl;
	return 0;
}
