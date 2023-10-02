#include<stdio.h>
int binary_search(int a[],int low,int high,int ele){
    int mid;
    while(low <= high){
        mid = (low + high)/2;
        if(a[mid]==ele)
           return mid;
        else if(a[mid]< ele)
            low = mid +1;
        else 
            high = mid - 1; 
    }
    return -1;
}
int main(){
    int list[100],m,i,ele,found;
    printf("enter the size of list:");
    scanf("%d",&m);
    printf("enter %d elements in list",m);
    for(i=0;i<m;i++)
        scanf("%d",&list[i]);
    printf("enter searching element");
    scanf("%d",&ele);
    found = binary_search(list,0,m-1,ele);
    if(found==-1)
        printf("the element is not found");
    else 
        printf("the element is found at %d position",found);
    return 0;

}