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

	int q=a[0];

	for (int i=1; i<N; i++){
		q=max(q, a[i]);
	}

	cout<<q;

return 0;
}