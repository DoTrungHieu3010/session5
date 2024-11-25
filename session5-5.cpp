#include<stdio.h>
int main(){
	int a, i ,tich;
    a = 1;
    while (a<=10){
    	printf("Bang cuu chuong cua %d \n", a);
    	for (i=1;i<11;i++){
		tich = a * i;
		printf("%d * %d = %d \n", a, i, tich);
	}
	a++;
	}
	return 0;
}
