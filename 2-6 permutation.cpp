#include <iostream>

using namespace std;

int oneToNine(int first , int second , int third){
	int a , b , c , d , e ,f , g , h , i;
	a = first / 100;
	b = (first % 100) / 10;
	c = first % 10;
	d = second / 100;
	e = (second % 100) / 10;
	f = second % 10;
	g = third / 100;
	h = (third % 100) / 10;
	i = third % 10;
	if (a + b + c + d + e + f + g + h + i == 45 && a * b * c * d * e * f * g * h * i == 362880){
	//sum = 45 product = 362880
		return 1;
	}
	return 0;
}

int main(int argc, char *argv[]) {
	int i,j,k;
	for(i = 123; i <= 329; i++)
	//max: 987
	{
		j = i * 2;
		k = i * 3;
	if(oneToNine(i,j,k) == 1){
		cout << i << " " << j << " " << k <<endl;
		}
	}
}