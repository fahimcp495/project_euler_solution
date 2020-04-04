#include<bits/stdc++.h>
using namespace std;

int main(){
	int f1 = 0, f2 = 1;
	long long ans = 0;
	while (true){
		int tmp = f2;
		f2 += f1;
		f1 = tmp;
		if(f2 > 4e6)	break;
		if(f2%2==0)	ans += f2;
	}
	cout << ans << endl;
	return 0;
}


/*
output: 4613732
*/
