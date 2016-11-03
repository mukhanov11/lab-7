#include <iostream>
using namespace std;
 
int main(){
	int n, m;
	cin>>n>>m;

	int A[n][m];
 
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(i==0 || j==0) A[i][j]=1;
			else A[i][j] = A[i-1][j] + A[i][j-1];          
		}
	}
 
	for(int i=0; i<n; i++){
	for(int j=0; j<m; j++){
		cout.width(3);
		cout<<A[i][j]<<" ";
	}
	cout<<endl;   
	}
 
return 0;
}