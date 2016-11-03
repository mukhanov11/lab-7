#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int N;
	cin>>N;

	int a[N];

	int s=0;
	for (int i=0; i<N; i++){
		cin>>a[i];
	}

	for (int i=0; i<N; i++){
		if (a[i]>0) s++;
	}

	cout<<s;

return 0;
}