#include"iostream"
using namespace std;
class area{
    private:
        int side;
    public:
        area(){

        }
        area(int s){
            side =s;
            printf("the address:%p",this);
        }
        int square(){
            printf("enter the area of the square:");
            scanf("%d",&side);
            int ar = side*side;
            return ar;
        }
};
int main(){
    area obj(3);
    area *b=&obj;
    int c=(b)->square();
    printf("the area is %d \n",c);
    printf("the area is %p",&obj);
    printf("%p",obj);
    
    return 0;
}