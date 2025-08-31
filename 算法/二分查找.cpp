#include <iostream>
#include <windows.h>
using namespace std; 
int main(){
	int n,xx;
	cout << "查找个数:";
	cin >> n;
	xx=n;
	xx+=10; 
	system("cls");
	
	
	
	cout << "输入数组\n";
	int a[n];
	for(int i=0; i<n; i++){
		cout << "输入第" << i << "个数:";
		cin >> a[i];
	}
	system("cls");
	
	
	
	cout << "查找的数：";
	int x;
    cin >> x;
    system("cls"); 
	
	
	
	n/=2;
	int e=0;
	while(1){
		if(e>xx){
			cout << "NO";
			return -1;
		}else if(a[n]==x){
			cout << a[n] << ' ' << n << "OK";
			return 0; 
		}else if(a[n]<x){
			n=n+(n/2);
		}else if(a[n]>x){
			n=n/3*2;
		}
		e++;
	}
}

