#include<bits/stdc++.h>
using namespace std;

#define dbg(a)	cerr << __LINE__ << ": " << #a << " = " << a << '\n'

typedef long long ll;

ll __lcm(ll a,ll b){
	return a*b/__gcd(a,b);
}
int main(){
	ll lcm = 1;
	ll n = 20;
	for (ll i = 1; i <= n; ++i){
		lcm = __lcm(lcm,i);
	}
	cout << lcm << endl;
	return 0;
}
