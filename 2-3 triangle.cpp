#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int floor;
	cin >> floor;
	for(int i = 1;i <= floor; i++){
		for(int j = 1;j < i; j++){
			cout << " ";
		}
		for(int k = 0;k < 2 * (floor - i) +1;k ++){
			cout << "#";
		}
		cout << "\n";
	}
}