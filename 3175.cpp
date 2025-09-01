#include <iostream>
#include <cstdio>
int main(){ 
	int n,i;
	std::cin >> n >> i; 
	long long a=n%1000;
	int result = 1;
	
	for(int j=1; j<=i; j++){
		result = (result * a) % 1000;
	}
	printf("%03d",result%1000);   
}
