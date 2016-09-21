#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int threeLine , fiveLine , sevenLine;
	cin >> threeLine >> fiveLine >> sevenLine ;
	for (int i = 10;1<100;i++){
		if(i % 3 == threeLine && i % 5 == fiveLine && i % 7 == sevenLine){
			cout << "那个结果是：" << i << "\n";
			break;
		}
		if (i >= 100){
			cout << "No answer";
			break;
		}
	}
}