#include <stdio.h>

int main() {
    float Toan, Van, Anh, tongDiem, trungBinh;

    printf("Nhap diem Toan: ");
    scanf("%f", &Toan);

    printf("Nhap diem Van: ");
    scanf("%f", &Van);

    printf("Nhap diem Anh: ");
    scanf("%f", &Anh);

    tongDiem = Toan + Van + Anh;      
    trungBinh = tongDiem / 3;                       

    printf("Tong diem: %.2f\n", tongDiem);
    printf("Diem trung binh: %.2f\n", trungBinh);

    return 0;
}
