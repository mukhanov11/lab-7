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

	for (int i=0; i<N; i++){
		if (i%2==0) cout<<a[i]<<" ";
	}	

return 0;
}