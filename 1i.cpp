#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int N;
	cin>>N;

	int a[N];

	for (int i=0; i<N; i++){
		cin>>a[i];
	}

	int q=a[N-1];

	for (int i=N-1; i>=0; i--){
		a[i]=a[i-1];
	}

	a[0]=q;

	for (int i=0; i<N; i++){
		cout<<a[i]<<" ";
	}

return 0;
}