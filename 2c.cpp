#include <iostream>
#include<cmath>
using namespace std;

int main(){

	int n, m, mx=0, plc=0;
	cin>>n>>m;

	int a[n][m];
	for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
		cin>>a[i][j];

	for(int i=0; i<n; i++){
		int s=0;
        	for(int j=0; j<m; j++){
			s+=a[i][j];              
        	}

		if(mx<s){
			mx=s;
			plc=i;
		}
	}

	cout<<mx<<endl<<plc;

return 0;
}