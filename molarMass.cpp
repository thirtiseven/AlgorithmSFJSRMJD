#include <iostream>
#include <iomanip>

using namespace std;
int main(int argc, char *argv[]) {
	char s[50];
	scanf("%s",s);
	float molarMass = 0.000;
	for(int i = 0;i <= 50;i++){
		if(s[i] == 'C'){
			molarMass += (float)(s[i+1]-48)*12.01;
		}
	}
	cout << setprecision(3) << molarMass << endl;
}