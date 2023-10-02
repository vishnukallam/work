#include<iostream>
using namespace std;
class student{
	private:
		int rno,s1,s2,s3, tot;
		char sname[20];
		float avg;
	public:
		void getInput();
		void process();
		void putOutput();
};

void student :: getInput(){
	cout<<"Enter Rno  : ";
	cin>>rno;
	cout<<"Enter Student Name : ";
	cin>>sname;
	cout<<"Enter Three subject marks :";
	cin>>s1>>s2>>s3;	
}

void student :: process(){
	tot = s1 + s2 + s3;
	avg = tot / 3.0;
}

void student :: putOutput(){
	cout<<"Rno  	: "<<rno<<endl;
	cout<<"Sname 	: "<<sname<<endl;
	cout<<"Total 	: "<<tot<<endl;
	cout<<"Avg marks: "<<avg<<endl;
}

int main(){
	student stu;
	stu.getInput();
	stu.process();
	stu.putOutput();
}
