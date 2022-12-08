#include <iostream>
using namespace std;

int main() 
{
        int n;
        cin >> n;
        int* numArr = new int[n];
        for (int i = 0; i < n; i++){
                cin >> numArr[i];
        }
	int t;
	cin >> t;
	int cnt = 0;
        for (int i = 0; i < n; i++){
                if (numArr[i] == t){
			cnt += 1;
		}
        }
        cout << "target value: " << t << endl;
	cout << "target count: " << cnt << endl;
        delete[] numArr;
        return 0;
}

