#include<iostream>
using namespace std;

int main(){

	int n;
	cin>>n;
 	int i;
 	bool check=true;
	for(i=2;i<=n-1;i++){
		if(check==false){
				//cout<<i<<"this is i"<<endl;
				break;

			}
		if(n%i==0){
			//cout<<i<<"this is i"<<endl;
			check=false;
			break;
			
		}
		
	}
	if(check){
		cout<<"number is prime"<<endl;
	}
	else{
		cout<<"number is not prime"<<endl;
	}
	//cout<<check<<endl;



	return 0;
}