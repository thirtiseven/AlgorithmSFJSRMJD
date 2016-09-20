#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[]) {
	for(int i = 100; i < 1000; i++){
		if(i == pow(( i % 10 ) , 3) + pow(((i % 100 - i % 10) / 10 ) , 3)+ pow(((i - i % 100) / 100 ) , 3)){
			cout << i <<"\n"; 
		}
	}
}