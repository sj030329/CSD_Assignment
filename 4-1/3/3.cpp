#include <iostream>
using namespace std;

void swapInt(int& n1, int& n2){
	int t1 = n1;
	n1 = n2;
	n2 = t1;
}

void swapString(std::string& s1, std::string& s2){
	std::string t2 = s1;
	s1 = s2;
	s2 = t2;
}

int main() 
{
        int n1, n2;
	std::string s1, s2;
	cin >> n1 >> n2 >> s1 >> s2;
	cout << "n1: " << n1 << ", n2: " << n2 << ", s1: " << s1 << ", s2: " << s2 << endl;
	swapInt(n1, n2);
	swapString(s1, s2);
        cout << "n1: " << n1 << ", n2: " << n2 << ", s1: " << s1 << ", s2: " << s2 << endl;
        return 0;
}

