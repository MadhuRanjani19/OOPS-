#include<iostream>
using namespace std;
int main(){
	int num,sum=0,digit;
	cout<<"enter the num:";
	cin>>num;
	while(num!=0){
		digit=num%10;
		sum=sum+digit;
		num=num/10;
	}
		cout<<"the sum is:"<<sum;
		return 0;
}
