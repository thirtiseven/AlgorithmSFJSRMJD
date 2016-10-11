#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
	int m,n;
	scanf("%d %d",&m,&n);
	char DNA[m][n];
	for(int i = 0;i <= m;i++){
		cin.getline(DNA[i],n,'\n');
	}
	for (int h = 0;h < m;h++){
		for (int j = 0;j < n;j++){
		cout << DNA[h][j];	
		}
	}

}