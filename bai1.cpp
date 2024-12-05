#include <stdio.h>  

int main() {  
    double T, S, P;  
    int n = 0; 
    double total = S; 

    // Nhập dữ liệu từ người dùng  
    printf("Nhap so tien can co (T): ");  
    scanf("%lf", &T);  
    printf("Nhap so tien ban dau (S): ");  
    scanf("%lf", &S);  
    printf("Nhap lai suat hang nam (P): ");  
    scanf("%lf", &P);  

    
    while (total < T) {  
        total += total * (P / 100); 
        n++; 
    }  

    // Xuất kết quả  
    printf("So nam can tiet kiem: %d\n", n);  
    
    return 0;  
}  