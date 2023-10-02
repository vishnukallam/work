#include<iostream>
using namespace std;
class fact{
	private:
		int fat,i,n;
	public:
		void getinput(){
			cout<<"enter any number:";
			cin>>n;
		}
		void process(){
			fat = 1;
			for(i=1;i<=n;i++){
				fat=fat*i;
			}
		}
		void putoutput(){
			cout<<endl<<"the factriol of "<<n<<" is "<<fat;
		}
};
int main(){
	fact number;
	number.getinput();
	number.process();
	number.putoutput();
	return 0;
}
