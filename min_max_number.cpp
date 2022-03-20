#include<iostream>
using namespace std;
#include<climits>





int main(){
	int N;
	cin>>N;
	int n;
	int i;
	int min=INT_MAX;
	int max=INT_MIN;
	for(i=0;i<N;i++){
		cin>>n;
		if(min>n){
			min=n;
		}
		if(n > max){
			max=n;
		}
	}
	
	cout<<"min number is:"<<min<<endl;
	cout<<"Max number is:"<<max<<endl;
	return 0;
	}

