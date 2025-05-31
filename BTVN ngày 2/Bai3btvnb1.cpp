#include <stdio.h>

int main(){
    int a;
    printf("a=");
    scanf("%d",&a);

    int b;
    printf("b=");
    scanf("%d",&b);

    int c;
    printf("c=");
    scanf("%d",&c);

    if(a + b > c){
        if(a + c > b){
            if(b + c > a){
                printf("day la tam giac");
            } else {
                printf("khong phải tam giac");
            }
        } else {
            printf("khong phải tam giac");
        }
    } else {
        printf("khong phải tam giac");
    }

   
}