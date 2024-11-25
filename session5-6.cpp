#include <stdio.h>
int main() {
    float a, b, result;
    int i;
    printf("Nhap so thu nhat: ");
    scanf("%f", &a);
    printf("Nhap so thu hai: ");
    scanf("%f", &b);
    do {
        printf("CALCULATOR\n");
        printf("1. Tong 2 so \n");
        printf("2. Hieu 2 so \n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        scanf("%d", &i);
        switch (i) {
            case 1:
                result = a + b;
                printf("Tong cua hai so la: %f \n", result);
                break;
            case 2:
                result = a - b;
                printf("Hieu cua hai so la: %f \n", result);
                break;
            case 3:
                result = a * b;
                printf("Tich cua hai so là: %f \n", result);
                break;
            case 4:
                if (b != 0) {
                    result = a / b;
                    printf("Thuong cua hai so là: %.2f\n", result);
                } else {
                    printf("Loi phep tinh \n");
                }
                break;
            case 5:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Khong hop le \n");
        }
    } while (i != 5);

    return 0;
}
