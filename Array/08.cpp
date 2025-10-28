// Write a program to check whether a number is armstrong or not

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,c=0,sum=0,rem;
	cout<<"Enter number:";
	cin>>n;
	int n1=n,n2=n;
	while(n1 > 0){
		c += 1;
		n /= 10;
	}
	cout<<c<<endl;
	while(n1 > 0){
		rem = n1 % 10;
		sum = sum + pow(rem,c);
		n1 /= 10;
	}
	cout<<sum<<endl;
	if(n2 == sum){
		cout<<"Armstrong";
	}
	else{
		cout<<"Not Armstrong";
	}
	return 0;
}