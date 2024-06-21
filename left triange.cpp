#include <iostream>
using namespace std;
class RPT
{
	public:
		int i,j,n;
		void p(int n){
			for(i=1;i<=n;i++){
				for(j=2*(n-1);j>0;j--){
					cout<<"*";
				}
				for(j=1;j<=i;j++){
					cout<<endl;
				}
				cout<<endl;
			}
		}
};
int main()
{
	int k;
	cin>>k;
	RPT r;
	r.p(k);
}
