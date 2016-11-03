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

	int s=0;
	for (int i=1; i<=N-1; i++){
		if (a[i]>a[i-1] && a[i]>a[i+1]) s++;
	}

	cout<<s;

return 0;
}