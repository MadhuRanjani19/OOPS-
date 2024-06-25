#include<iostream>
#include<string>
#include<cctype>
using namespace std;
bool ispalindrome(const string&str){
	int left = 0;
	int right = str.length()-1;
	while(left<right){
		while(isalnum(str[right])&&left<right){
			++left;
		}
		while(isalnum(str[right])&&left<right){
			--right;
		}
		if(tolower(str[left]) != tolower(str[right])){
			return false;
		}
		++left;
		--right;
	}
	return true;
}
int main(){
	string input;
	cout<<"enter a string:";
	cin>>input;
	if(ispalindrome(input)){
		cout<<"\""<<input<<"\"is a palindrome."<<endl;
	 }
	 else{
	 	cout<<"\""<<input<<"\"is not a palindrome."<<endl;
	 }
	 return 0;
}
