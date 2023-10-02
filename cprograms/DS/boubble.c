#include<stdio.h>
int bouble(int a[], int n,int x ){
    int i,j,t;
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]= a[j+1];
                a[j+1]=t;
            }
         }
    }
    return -1;
}
int main(){
    int list[100],m,ele,found,i;
    printf("enter the list size =");
    scanf("%d",&m);
    printf("enter elements in the %d:",m);
    for(i=0;i<m;i++)
    scanf("%d",&list[i]);
  
    bouble(list,m,ele);
    printf("the sorted array is\n");
    for(i=0;i<m;i++)
    printf("%3d",list[i]);

}