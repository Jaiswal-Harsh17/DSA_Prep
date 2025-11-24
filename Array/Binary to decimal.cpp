//Binary to Decimal Conversion
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter Binary Number: ";
	cin>>num;
	int decimal = 0, base = 1;
	while(num > 0){
		int lastDigit = num % 10;
		decimal += lastDigit * base;
		base *= 2;
		num /= 10;
	}
	cout<<"Decimal of "<<num<<" is: "<<decimal;
	return 0;
}