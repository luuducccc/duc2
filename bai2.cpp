#include <stdio.h>  
#include <math.h>  

int main() {  
    double pi = 0.0; 
    double eps;      
    double term;      
    int n = 0;        

    
    printf("Nhap sai so eps: ");  
    scanf("%lf", &eps);  

    // Tính giá trị PI  
    do {  
        term = (n % 2 == 0 ? 1.0 : -1.0) * (4.0 / (2 * n + 1));  
        pi += term;   
        n++;
    } while (fabs(term) >= eps);  

    // Xuất kết quả  
    printf("Gia tri PI tinh duoc: %.10f\n", pi);  
    
    return 0;  
}