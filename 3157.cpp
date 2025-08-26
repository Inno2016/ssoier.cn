#include <iostream>
using namespace std;
int main(){
	int i=0,a[1000]={0},sum=0;
	while(1){
		cin >> a[i];
		if(a[i]!=-1){
			sum+=a[i];
			++i;
		}else{
			break;
		}
	}
	cout << sum;
} 
