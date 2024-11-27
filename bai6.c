#include<stdio.h>
int main(){
    int numbers[5]={1,2,3,4,5};
    int i;
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            numbers[i] += 3;
        }else
        {
            numbers[i] += 2;
        }
        
    }
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}