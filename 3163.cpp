#include <iostream>
using namespace std;
int main(){
	long long n=0,m,sum=0;
	cin >> m;
	while(1){
		sum=sum+n;
		if(sum>m){
			cout << n;
			break;
		}
		n++;
	}
}
