#include<stdio.h>
int fgen(int x){
    if(x==0)
    return 0;
    else if(x == 1)
    return 1;
    else
        return fgen(x-1)+fgen(x-2);
}
int fsearch(int a[],int ele,int x){
    int m=0,i,offset=-1;
    while (fgen(m)>x)
        m++;
    while (fgen(m)>1){
        i= ((offset + fgen(m-2)))<(x-2)?(offset+fgen(m-1)):(x-1);
        if(a[i]==ele)
        return i+1;
      else if(ele>a[i]){
        offset =i;
        m=m-1;}
      else
        m=m-2;
    }
    return -1;
}
int main(){
    int list[100],n,ele,i,found;
    printf("\nenter size of an array : ");
    scanf("%d",&n);
    printf("enter %d elements to the list :",n);
    for(i=0;i<n;i++)
    scanf("%d",&list[i]);
    printf("enter element to be found : ");
    scanf("%d",&ele);
    found=fsearch(list,n,ele);
    if(found == -1)
    printf("the entered element %d is not exist in list",ele);
    else
    printf("element %d is found in %d",ele,found);
    return 0;
}
