#include<iostream>
using namespace std;
int main(){
	int num,data,f=0,rem;
	cout<<"enter the num:";
	cin>>num;
	data=num;
	while(num!=0){
		rem=num%10;
		f=f+(rem*rem*rem);
		num=num/10;
	}
	if(data==f){
		cout<<"it is Armstrong number";
	}
	else{
		cout<<"it is not an Armstrong number";
	}
	return 0;
}
		
