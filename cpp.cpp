#include <iostream>

using namespace std;
int main()
{
	int n;
	int sum=0;
	int i=1;
	cin>>n;
	while(i<=n){
		sum+=i;
		i+=1;
	}
	cout<< "sum is:" <<endl;
	cout<< sum <<endl;
	return 0;
}