#include<iostream>
using namespace std;
int main(){
	int r,i,j;
	cout<<"enter the rows:";
	cin>>r;
	for(i=1;i<=r;i++){
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
		
	}
}
