#include <iostream>
#include <cstdio>
#define MAX 20

using namespace std;

int main(int argc, char *argv[]) {
	
	char testArray[5][5] = {'T','R','G','S','J',
							'X','D','O','K','I',
							'M',' ','V','L','N',
							'W','P','A','B','E',
							'U','Q','H','C','F'};
	char input[MAX] = {0};
	
	int alice,bob,clare,dave;
	for(alice = 0;alice < 5;alice++){
		for(bob = 0;bob < 5;bob++){
			if (testArray[alice][bob] == ' '){
				clare = alice;
				dave = bob;
			}
		}
	}
	
	scanf("%s",input);
	for(int i = 0;i < MAX;i++){
		if (input[i] == 0){
			break;
		}else if(input[i] == 'A'){
			if(clare - 1 < 0){
				cout << "This puzzle has no final configuration" << endl;
			}
			testArray[clare][dave] = testArray[clare - 1][dave];
			testArray[clare - 1][dave] = ' ';
			clare--;
		}else if(input[i] == 'B'){
			if(clare + 1 > 4){
				cout << "This puzzle has no final configuration" << endl;
			}
			testArray[clare][dave] = testArray[clare + 1][dave];
			testArray[clare + 1][dave] = ' ';
			clare++;
		}else if(input[i] == 'L'){
			if(dave - 1 < 0){
				cout << "This puzzle has no final configuration" << endl;
			}
			testArray[clare][dave] = testArray[clare][dave - 1];
			testArray[clare][dave - 1] = ' ';
			dave--;
		}else if(input[i] == 'R'){
			if(dave + 1 > 4){
				cout << "This puzzle has no final configuration" << endl;
			}
			testArray[clare][dave] = testArray[clare][dave + 1];
			testArray[clare][dave + 1] = ' ';
			dave++;
		}
	}
   int eve,frank;
	for (eve = 0;eve < 5;eve++){
		for(frank = 0;frank < 5;frank++){
			cout << testArray[eve][frank] << ' ';
		}
		cout << endl;
	}
}