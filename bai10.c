#include<stdio.h>
int main() {
    int n = 0;
    do {
        printf("Nhập vào kích thước mảng (lớn hơn 0): ");
        scanf("%d", &n);
    } while (n < 1); 
    int numbers[n]; 
    for (int i = 0; i < n; i++) {
        printf("Nhập vào phần tử thứ %d trong mảng: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("Các số nguyên tố trong mảng là: ");
    for (int i = 0; i < n; i++) {
        int num = numbers[i];

        if (num > 1) 
        {  
            int isPrime = 1;  
            for (int j = 2; j < num; j++) 
            {
                if (num % j == 0) 
                {
                    isPrime = 0; 
                    break;
                }
            }

            if (isPrime) 
            {
                printf("%d ", num); 
            }
        }
    }

    return 0;
}
