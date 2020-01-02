#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;	cin >> n;
	long long sum = 0;
	for (int i = 1; i < n; ++i){
		if(i%3==0 || i%5==0)	sum += i;
	}
	cout << sum << endl;
	return 0;
}

/*
input: 10 ---> output: 23
input: 1000 ---> output: 233168
*/
