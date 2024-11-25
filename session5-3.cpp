#include<stdio.h>
int main(){
	int i, a, tong;
		tong = 0;
	do{
		printf("Moi ban nhap so nguyen duong ");
		scanf("%d", &a);
		if (a<=0){
		}
	} while (a<=0);

	for (i=1;i<=a;i++){

	tong += i;	
}
	printf("Tong cua cac so nguyen duong la %d", tong);
	
	return 0;
	
}
