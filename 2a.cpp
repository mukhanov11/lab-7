#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int N;
	cin>>N;

	int a[N][N];

	for(int i=0; i<N; i++){
		for (int j=0; j<N; j++){
			if ((i+j)==(N-1)) a[i][j] = 1;
			if ((i+j)<(N-1)) a[i][j] = 0;
			if ((i+j)>(N-1)) a[i][j] = 2;
			
		}
	}

	for(int i=0; i<N; i++){
		for (int j=0; j<N; j++){
			cout<<a[i][j]<<" ";
	        }
	cout<<endl;	
	}

return 0;
}