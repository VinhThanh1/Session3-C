#include <stdio.h>

int main(){
    printf("Nhap mot so nguyen co 4 chu so: ");
    int a, reverse = 0;
	scanf("%d", &a);
        reverse += a % 10 * 1000;      
        a /= 10;            
        reverse += a % 10 * 100;    
        a /= 10;           
        reverse += a % 10 * 10;      
        a /= 10;            
        reverse += a % 10;      
    
    printf("Tong cac chu so la: %d\n", reverse);
    
    return 0;
}
