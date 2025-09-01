#include <iostream>
int main(){
	long long n;
	std::cin >> n;
	long long a=1;
	for(long long j=1; j<=n; j++){
		a*=j; 
	}
	std::cout << a;
}
