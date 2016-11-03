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
	for (int i=1; i<N; i++){
		if ((a[i]>0 && a[i-1]>0) || (a[i]<0 && a[i-1]<0)) s++;
		}
	
	if (s>0) cout<<"YES";
	else cout<<"NO"; 

return 0;
}