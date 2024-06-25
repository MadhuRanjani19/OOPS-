#include<iostream>
using namespace std;
int main(){
	int i,j,n=5;
	for(i=0;i<=n;i++){
		for(j=2*(n-i);j>0;j--){
			cout<<" ";
		}
		for(j=0;j<i;j++){
			cout<<("* ");
		}
		cout<<"\n";
	}
	return 0;
}
