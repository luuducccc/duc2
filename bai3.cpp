#include <stdio.h>  

int isPerfectNumber(int number) {  
    int sum = 0;  

    // Tính tổng các ước số của number  
    for (int i = 1; i <= number / 2; i++) {  
        if (number % i == 0) {  
            sum += i;  
        }  
    }  

      
    return (sum == number);  
}  

int main() {  
    int n;  

   
    printf("Nhap mot so nguyen duong n: ");  
    scanf("%d", &n);  

    printf("Cac so hoan hao khong vuot qua %d la:\n", n);  

    
    for (int i = 1; i <= n; i++) {  
        if (isPerfectNumber(i)) {  
            printf("%d ", i);  
        }  
    }  
    printf("\n");  

    return 0;  
}