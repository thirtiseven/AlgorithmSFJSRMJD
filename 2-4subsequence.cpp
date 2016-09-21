#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n,m;
	cin >> n >> m;
	if (n < 0 || m > 1000000 || n >= m){
		cout << "你的数据错了。";
	}
	double subsequence = 0.0;

	for (int i = n ; i <= m ; i++){

		subsequence += (double)1/ (i * i); 
		
	}
	cout << subsequence << endl;
}