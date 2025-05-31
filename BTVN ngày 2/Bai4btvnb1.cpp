#include <stdio.h>

int main(){
	int sodien;
	printf("sodien =");
	scanf("%d",&sodien);

	int tiendien;
	

	
	if(sodien<=50){

		tiendien = sodien * 1678;
		
		}else{
			if(sodien<=100){
				tiendien = sodien * 1734;

			}else{
				if(sodien<=200){
				tiendien = sodien * 2014;
			}else{
				tiendien = sodien * 2536;
			}
		}
		
printf("tien dien la %d",tiendien);

}
	
}