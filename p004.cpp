#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPal(int n){
	int rev=0, tmp=n;
	while (tmp){
		rev = rev*10+tmp%10;
		tmp/=10;
	}
	return rev==n;
}

ll largestPal(){
	ll ret = -1;
	for (int i = 100; i < 1000; ++i){
		for (int j = 100; j < 1000; ++j){
			if(isPal(i*j) and i*j>ret){
				ret = i*j;
			}
		}
	}
	return ret;
}

int main(){
	cout << largestPal() << endl;
	return 0;
}
