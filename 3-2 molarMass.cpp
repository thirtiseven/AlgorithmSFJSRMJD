#include <iostream>
#include <stdio.h>
#define sMax 20

using namespace std;
int main(int argc, char *argv[]) {
	char s[sMax] = {0};
	scanf("%s",s);
	double mass = 0;
	double alice;
	for(int i = 0;i < sMax;i++){
		if(s[i] == 'C' && s[i+1] >= 50 && s[i+1] <= 57){
			alice = s[i+1];
			alice = alice - 48;
			mass += alice * 12.01;
		}else if(s[i] == 'H' && s[i+1] >= 50 && s[i+1] <= 57){
			alice = s[i+1];
			alice = alice - 48;
			mass += alice * 1.008;
		}else if(s[i] == 'O' && s[i+1] >= 50 && s[i+1] <= 57){
			alice = s[i+1];
			alice = alice - 48;
			mass += alice * 16.00;
		}else if(s[i] == 'N' && s[i+1] >= 50 && s[i+1] <= 57){
			alice = s[i+1];
			alice = alice - 48;
			mass += alice * 14.01;
		}else if(s[i] == 'C'){
			mass += 12.01;
		}else if(s[i] == 'H'){
			mass += 1.008;
		}else if(s[i] == 'O'){
			mass += 16.00;
		}else if(s[i] == 'N'){
			mass += 14.01;
		}
		else{
			continue;
		}		
	}
	cout << "Molar mass is " << mass << " g/mol" << endl;
}