#include<iostream>
using namespace std;

int main(){


	int alphabets=0;
	int digits=0;
	int spaces=0;
	int others=0;
	char ch;
	ch=cin.get();
	while(ch!='$'){
		if(ch >= '0' and ch <= '9'){
			digits++;
		}
		else if((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z')){
			alphabets++;

		}
		else if(ch==' ' or ch=='\n' or ch=='\t'){
			spaces++;

		}
		else{
			others++;
		}

		ch=cin.get();

	}
	cout<<"digits are:"<<digits<<endl;
	cout<<"alphabets are:"<<alphabets<<endl;
	cout<<"spaces are:"<<spaces<<endl;
	cout<<"others are:"<<others<<endl;


	return 0;
}