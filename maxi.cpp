#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	if(a>b){
		cout<<a,"a is greater";
	}
	else if(b>c){
		cout<<b,"b is greater";
	}
	else if(c>a){
		cout<<c,"c is greater";
	}
	else{
		cout<<"error";
	}
	return 0;
}
