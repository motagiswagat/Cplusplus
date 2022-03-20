#include<iostream>
using namespace std;

int main(){
	int x=0;
	int y=0;
	char a;
	//bool check=true;
	//cin>>a;
	a=cin.get();
	while(a!='\n'){
		
		if(a=='N'){
			y+=1;
		}
		else if(a=='S'){
			y-=1;
		}
		else if(a=='E'){
			x+=1;
		}
		else if(a=='W'){
			x-=1;
		}
		
		a=cin.get();
	}
	cout<<"x is:"<<x<<" & y is:"<<y<<endl;



	return 0;
}