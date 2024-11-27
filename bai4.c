#include<stdio.h>
int main(){
    int n = 0;
    do
    {
        printf("nhap vao kich thuoc mang<lon hon 0> : ");
        scanf("%d",&n);
    } while (n < 1);
    int numbers[n];
    printf("kich thuoc mang = %d",n);
    for ( int i = 0; i < sizeof(numbers)/sizeof(int); i++)
    {
        printf("nhap vao phan tu trong mang: \n");
        scanf("%d",&numbers[i]);

    }
}