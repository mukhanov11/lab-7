#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	int a[n][n];

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cin>>a[i][j];
		}
	}

	bool ok=true;

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (i!=j) {
				if(a[i][j] != a[j][i]) {
					ok=false;	
					break;
				}
			}
		}
	}

	if (ok) cout<<"yes";
	else cout<<"no";

return 0;
}