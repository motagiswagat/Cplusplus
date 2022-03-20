#include<iostream>
using namespace std;


int main(){
	int n;
	int p=1;
	int decimal=0;
	int last_digit;
	cin>>n;
	while(n>0){
		 
		
		last_digit=n%10;
		decimal+=last_digit*p;
		p=p*2;
		n=n/10;

	}
	cout<<"decimal value is "<<decimal<<endl;

	return 0;
	

}