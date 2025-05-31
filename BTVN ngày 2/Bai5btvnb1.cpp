#include <stdio.h>
#include <math.h>
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

    float delta;
    delta = b*b - 4*a*c;

    float x1;
    float x2;
    if(delta>0){
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("x1= %f\n",x1);
        printf("x2= %f\n",x2);

    }else{
        if(delta==0){
             x1 = (-b)/(2*a);
             x2 = (-b)/(2*a);
             printf("x1= %f\n",x1);
             printf("x2= %f\n",x2);

        }else{
            printf("PT vo nghiem\n");

        }

    }


}
