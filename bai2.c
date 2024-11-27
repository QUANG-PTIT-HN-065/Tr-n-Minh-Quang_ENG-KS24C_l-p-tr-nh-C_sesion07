#include<stdio.h>
int main(){
    int numbers[5];
    int i = 0;
    for ( i = 0 ; i < sizeof(numbers)/sizeof(int); i++)
    {
        printf("hay nhap vao phan tu: ");
        scanf("%d",&numbers[i]);
    }
    for ( i = 0; i < sizeof(numbers)/sizeof(int); i++)
    {
        printf("phan tu bn da nhap la:%d\n ",numbers[i]);
    }
    return 0;
}