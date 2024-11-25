#include<stdio.h>
int main(){
	int i, a;
	a=1;
	while (a==1){
		printf("Nhap so ban chon ");
		scanf("%d", &i);
		if (i!=5){
			printf("Ban da nhap sai \n");
		} else {
			printf("Ban da nhap dung \n");
			a=0;
		}
	}
	return 0; 
}
