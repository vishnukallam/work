#include<iostream>
using namespace std;
class box{
	private:
		int length;
	public:
			box(){
			length = 0;
		}
		friend int putoutput(box b);
};
int putoutput(box b){
	b.length+=10;
	return b.length;
}
int mian()
{
	box b;
	b.putoutput(b);
	return 0;
}
