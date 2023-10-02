#include<stdio.h>
int partition(int a[],int first,int last){
    int pivot,i,j,temp;
    pivot = a[first];
    i = first;
    for(j=first+1;j<=last;j++){
        if(a[j]<pivot){
            i++;
            if(i!=j){
                temp = a[i];
                a[i]=a[j];
                a[j] = temp;
            }
        }
    }
    if(i!=first){
        temp=a[i];
        a[i]=a[first];
        a[first]=temp;
    }
    return i;
}
void quicksort(int a[],int first,int last){
    int mid;
    if(first<last){
        mid = partition(a,first,last);
        quicksort(a,first,mid-1);
        quicksort(a,mid+1,last);
    }
}
int main(){
    int list[100],m,i;
    printf("enter the list size =    ");
    scanf("%d",&m);
    printf("enter %d elements into the list   :  ",m);
    for(i=0;i<m;i++)
    scanf("%d",&list[i]);
    quicksort(list,0,m-1);
    printf("the sorted array is\n");
    for(i=0;i<m;i++)
    printf("%3d",list[i]);
    return 0;
}