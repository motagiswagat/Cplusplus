#include <iostream>

using namespace std;
int main(){

	int n;
	cin>>n;
	int sum=0;

	while(n>0){
		int last_digit=n%10;
		//cout<<"last_digit"<<last_digit<<endl;
		sum+=last_digit;
		n=n/10;
		//cout<<"n becomes:"<<n<<endl;
	}
		
	cout<<"sum of digits is:"<<sum<<endl;



	return 0;
}