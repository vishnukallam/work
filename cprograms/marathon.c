#include<stdio.h>
int main(){
    int miles,yard,marathon;
    printf("enter miles and yards values : ");
    scanf("%d%d",&miles,&yard);
    marathon = 1.605*(miles + yard/1760.0);
    printf("marathon is %d km",marathon);
}