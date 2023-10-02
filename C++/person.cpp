#include<iostream>
using namespace std;

class person{
	private:
	char name[10],job[10];
	int age;
	public:
		void getinput(){
			cout<<"enter your name:"<<endl;
			cin>>name;
			cout<<"enter your age:"<<endl;
			cin>>age;
			cout<<"enter your job:"<<endl;
			cin>>job;
		}
		void putoutput(){
			cout<<"Your name is :"<<name<<endl;
			cout<<"Your  age is :"<<age<<endl;
			cout<<"Your job is:"<<job<<endl;
		}
};
int main(){
	person human;
	human.getinput();
	human.putoutput();
	return 0;
}
