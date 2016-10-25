#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;


char alice[] = {' ','A','C','G','T'};
char s[1037];
int dave[1001][5];


int bob(char clare){
	switch (clare) {
		case 'A':return 1;
		case 'C':return 2;
		case 'G':return 3;
		case 'T':return 4;
		default :return 0;
		
	}
}

int main(int argc, char *argv[]){
	int casenumber;
	cin >> casenumber;
	while (casenumber--) {
		memset(dave,0,sizeof(dave));
		
		int m,n;
		cin >> m >> n;
		
		for(int i=0;i<m;i++)
		{
			scanf("%s",s);
		for(int j=0;j<n;j++)
				dave[j][bob(s[j])]++;
		}
		
		int eve , frank;
		for(int p=0;p<n;p++){
			eve = dave[p][1];
			frank = 1;
			for(int k=2;k<m;k++){
				if(dave[p][k]>eve){
					eve = dave[p][k];
					frank = k;
				}
			}
			cout << alice[frank];
		}
		
	}
}




