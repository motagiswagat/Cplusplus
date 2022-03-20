#include<iostream>
using namespace std;
#include<climits>



int main(){

	int largest= INT_MIN;
	int smallest=INT_MAX;

	int n;
	cin >> n;

	int a[1000];

	for(int i=0;i<n;i++){
		cin>>a[i];
		/*
		if(a[i]>largest){
			largest=a[i];
		}
		if(a[i]<smallest){
			smallest=a[i];
		}
		*/
		largest=max(a[i],largest);
		smallest=min(a[i],smallest);
	}

	cout<<"largest is:"<<largest<<endl;

	cout<<"smallest is:"<<smallest<<endl;

	return 0;


}
