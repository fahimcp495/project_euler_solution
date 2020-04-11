#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPrime(ll n){
	for (ll i = 2; i*i <= n; ++i){
		if(n%i==0)	return 0;
	}
	return 1;
}

int main(){
	int cnt = 0, n=2;
	while (true){
		if(isPrime(n))	cnt++;
		if(cnt==10001)	break;
		n++;
	}
	cout << n << endl;
	return 0;
}
