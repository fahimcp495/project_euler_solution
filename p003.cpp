#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll largestPM(long long n){
	ll ret=1;
	for (ll i = 2; i*i <= n; ++i){
		if(n%i==0){
			ret = i;
			while (n%i==0){
				n/=i;
			}
		}
	}
	if(n>ret)	ret=n;
	return ret;
}

int main(){
	ll n = 600851475143;
	cout << largestPM(n) << endl;
	return 0;
}
