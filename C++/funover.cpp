#include<iostream>
using namespace std;

int add(int a, int b){
	return a + b;
}

int add(int a, int b,int c){
	return a + b + c;
}
float add(float a, float b){
	return a + b;
}

int main(){
	int x, y, z;
	float p, q;
	cout<<"Enter Two integers : ";
	cin>>x>>y;
	cout<<"Addition of Two integers : "<<add(x,y);
	
	cout<<"Enter three integers : ";
	cin>>x>>y>>z;
	cout<<"Addition of three integers : "<<add(x,y,z);
	
	cout<<"Enter Two floats : ";
	cin>>p>>q;
	cout<<"Addition of Two floats : "<<add(p,q);
}
