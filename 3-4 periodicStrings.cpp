#include <iostream>
#include <cstdio>  
#include <cstring> 


using namespace std;
/*
int main(int argc, char *argv[]) {
	char s[80] = {0};
	scanf("%s",s);
	for(int i = 1;i <= 40;i++){
		for(int j = 0;j <= 40;j++){
			if(s[j] != s[j + i] && s[j + i] != 0){
				break;
			}
		cout << i << endl;
		exit(0);
		}
	}	
}
*/
 
int main()  
{  
	char word[100];  
	scanf("%s",word);  
	int nLen=strlen(word);  
	for (int i=1; i<=nLen; ++i)  
	{  
		if (nLen%i==0)// cycle string  
		{  
			int ok=1;  
			for (int j=i; j<nLen; ++j)  
			{  
				if (word[j%i]!=word[j])// i stands for cycle time  
				{  
					ok=0;  
					break;  
				}  
			}  
			if (ok)     
			{  
				printf("%d\n",i);  
				break;// this is the least cycle   
			}  
		}  
	}  
	return 0;  
} 