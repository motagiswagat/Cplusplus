#include<iostream>
using namespace std;

int main(){

	int num;
	cin>>num;
	float ans=0;
	while(ans*ans <= num){
		ans+=0.01;
	}
	ans=ans-0.01;
	cout<<ans;


	return 0;
}