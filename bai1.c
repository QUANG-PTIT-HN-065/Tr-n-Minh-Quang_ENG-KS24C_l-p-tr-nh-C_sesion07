#include<stdio.h>
int main(){
    int numbers[5] = {1,2,3,4,5};
    int i;
    for (i = 0; i < sizeof(numbers)/sizeof(int); i++)
    {
        printf("%d\n",numbers[i]);
    }
    printf("do dai cua mang la: %d",i);
}