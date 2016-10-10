#include <iostream>

using namespace std;

int Dcount[10] = {0};
	
int main(int argc, char *argv[]) {

	int n;
	cin >> n;
    if(n < 1 || n > 10000){
		cout << "WRONG INPUT" << endl;	
	}else{
	int alice = 0,bob = 0,clare = 0,dave = 0;

	for(int i = 1;i <= n;i++){
		alice = i / 1000;
		bob   = i / 100 - alice;
		clare = i / 10 - bob;
		dave  = i % 10;
		Dcount[alice]++;
		Dcount[bob]++;
		Dcount[clare]++;
		Dcount[dave]++;	
		}

	Dcount[0] = n / 1000 + n / 100 + n / 10;
		
	for(int j = 0;j <= 9;j++){
		int alice = j;
		cout << "The count of " << alice << " is " << Dcount[j] << endl;
	}
	
	}
}