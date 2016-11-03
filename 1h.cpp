#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int N, m;
	cin>>N;

	int a[N];

	for (int i=0; i<N; i++){
		cin>>a[i];
	}
	
	for (int i=0; 	i<N-1; i=i+2){
		m=a[i];
		a[i]=a[i+1];
		a[i+1]=m;
	}
	for (int i=0; i<N; i++){
		cout<<a[i]<<" ";
	}

return 0;
}