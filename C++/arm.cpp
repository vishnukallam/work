
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num,org_num,rem,result=0,count=0;
    cout<<"enter a number:";
    cin>>num;
    org_num=num;
    while (org_num !=0){
    	count++;
		org_num = org_num\10;	
	}
    while (org_num != 0){
        rem = org_num % 10;
        result = result + pow(rem,count);
        org_num = org_num / 10;
    }
    if (result == num)
        cout << "the given number is armstrong number";
    else
        cout<< "the given number is not an armstromg number";
    return 0;
}
