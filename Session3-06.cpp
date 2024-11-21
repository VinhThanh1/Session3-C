#include <stdio.h>

int main() {
    float Day, chieuCao, dienTich;
    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%f", &Day);
    printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", &chieuCao);
    dienTich = 0.5 * Day * chieuCao; 
    printf("Dien tich cua tam giac la: %.2f\n", dienTich);
    return 0;
}
