#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	n=n/10;
	int result=0;
	while(n-5>=0){
		result+=7;
		n=n-5;
	}
	while(n-3>=0){
		result+=4;
		n=n-3;
	}
	result+=n;
	cout<<result<<endl;
} 
