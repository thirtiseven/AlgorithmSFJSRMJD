#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;
int main(int argc, char *argv[]) {
	int a , b , c;
	while(scanf("%d %d %d",&a,&b,&c) == 3 && a!=0 && b!=0 && c!=0){
	if(a>1000000 || b>1000000 || c>100){
			cout << "WORNG" <<endl;
			break;
		}
	double alice = (double)a/(double)b;
	cout << setprecision(c) << alice << endl;
	}
}