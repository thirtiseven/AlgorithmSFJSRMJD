/*
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

}*/

#include <iostream>  
#include<cstdio>   
using namespace std;  
struct DNA  
{  
	int a,c,g,t;  
}d[1005];  
int main(int argc, char *argv[])  
{  
	int t,n,m,i,j,ans,max;  
	char s[1005];  
	cin>>t;  
	while(t--)  
	{   scanf("%d%d",&n,&m);   
		for(i=0;i<m;i++)  
			d[i].a=d[i].c=d[i].g=d[i].t=0;  
		for(i=0;i<n;i++)  
		{scanf("%s",s);  
		 for(j=0;j<m;j++)  
		 if(s[j]=='A') d[j].a++;  
			else if(s[j]=='C') d[j].c++;  
				else if(s[j]=='G') d[j].g++;  
						else d[j].t++;  
		}  
		for(ans=i=0;i<m;i++)  
		{     
			s[i]='A';max=d[i].a;  
			if(d[i].c>max) s[i]='C',max=d[i].c;  
			if(d[i].g>max) s[i]='G',max=d[i].g;  
			if(d[i].t>max) s[i]='T',max=d[i].t;  
			ans+=n-max;  
		}  
		s[m]=0;  
		cout<<s<<endl<<ans<<endl;     
	}  
	return 0;  
} 