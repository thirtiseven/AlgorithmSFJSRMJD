#include <iostream>
#include <stdio.h>

using namespace std;
int main(int argc, char *argv[]) {
	char s[80];
	scanf("%s",s);
	int sum = 0;
	int comb = 1;
	for(int i = 0;i < 80;i++){
		if(s[i] == 'X'){
			comb = 1;
		}
		if(s[i] == 'O'){
			sum += comb;
			comb++;
		}
		if(s[i] == ' '){
			break;
		}
	}
	printf("%d",sum);
}