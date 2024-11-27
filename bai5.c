#include<stdio.h>
int main(){
    int numbers[5]={1,2,3,4,5};
    int i;
    int solon = numbers[0];       
    int sobe = numbers[0];
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] < sobe)
        {
            sobe = numbers[i];
        }
        if (numbers[i] > solon)
        {
            solon = numbers[i];
        }
        
        
    }
    printf("Mang da khai bao: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    printf("Phan tu lon nhat trong mang: %d\n", solon);
    printf("Phan tu nho nhat trong mang: %d\n", sobe);

    return 0;
}