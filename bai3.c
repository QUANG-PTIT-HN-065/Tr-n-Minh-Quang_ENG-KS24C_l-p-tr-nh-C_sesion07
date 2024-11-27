#include<stdio.h>
int main(){
    int numbers[5];
    int i,a = 0;
    for ( i = 0 ; i < sizeof(numbers)/sizeof(int); i++)
    {
        printf("hay nhap vao phan tu: ");
        scanf("%d",&numbers[i]);
    }
    printf("cac so chan trong mang vua nhap la;\n");
    for ( i = 0; i < sizeof(numbers)/sizeof(int); i++)
    {
        if (numbers[i] % 2 == 0)
        {
            printf("%d\n",numbers[i]);
            a += 1;
        }
        
    }
    if (a == 0)
    {
        printf("khong co so chan");
    }
    return 0;
}