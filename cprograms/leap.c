#include<stdio.h>
int main(){
    int year;
    printf("enter year: ");
    scanf("%d",&year);
    if(year %4==0)
    {
        if(year %100==0){
            if(year %400==0){
            printf("leap year");}
    else{
        printf("its not a leap year");
    }}
    
    else
    printf("the year is a leap year");
 }
    else 
    printf("it is not a leap year");   
return 0;
}
