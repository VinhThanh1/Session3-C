#include <stdio.h>
int main() {
    float r, chuVi, dienTich;
    float PI =3.14;
    printf("Nhap ban kinh hinh tron (r): ");
    scanf("%f", &r);
    chuVi = 2 * PI * r;
    dienTich = PI * r * r;         
    printf("Chu vi hinh tron: %.2f\n", chuVi);
    printf("Dien tich hinh tron: %.2f\n", dienTich);
    return 0;
}
