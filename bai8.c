#include<stdio.h>
int main(){
    int x,y;
    
while (1)
{
    printf("nhap vao so hang cau mang: ");
    scanf("%d",&x);
    printf("nhap vao so cot cau mang: ");
    scanf("%d",&y);
    if (x > 0 && y > 0)
    {
        break;
    }else
    {
        printf("so hang va so cot phai lon hon 0\n");
    }
}
int munbers[x][y];
for (int i = 0; i < x; i++)
{
    for (int j = 0; j < y; j++)
    {
        printf("hay nhap vao gi tri o hang %d , cot %d: ",i,j);
        scanf("%d",&munbers[i][j]);
    }
}
for (int i = 0; i < x; i++)
{
    for (int j = 0; j < y; j++)
    {
        printf("%d ",munbers[i][j]);
        
    }
    printf("\n");
}
return 0;
}