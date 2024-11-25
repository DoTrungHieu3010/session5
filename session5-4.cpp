#include<stdio.h>
int main(){
	int i, a, tich;

	do{
		printf("Nhap so nguyen duong ban chon: ");
		scanf("%d", &a);
		if(a<=0){
		}
	}while (a<=0 || a>=11);
	for (i=1;i<11;i++){
		tich = a * i;
		printf("%d * %d = %d \n", a, i, tich);
	}
	return 0;
}
