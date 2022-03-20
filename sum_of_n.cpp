#include <iostream>

using namespace std;
int main()
{
	int n;
	int sum=0;
	int i=1;
	int sum2=0;
	cin>>n;
	while(i<=n){
		sum+=i;
		i+=1;
	}
	cout<< "sum by loop is:" <<sum<<endl;
	sum2=n*(n+1)/2;
	cout<<"Sum by formula is "<<sum2<<endl;
	return 0;
}