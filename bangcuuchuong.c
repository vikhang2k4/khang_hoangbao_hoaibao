#include<stdio.h>
int bangcuuchuong(int n)
{
    printf("====Bảng Cửu Chương====", n);
    for (int i = 1; i<=10; i++)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }
}
int main()
{
    int n;
    printf("nhập số cần tính cửu chương (1-9)");
    scanf("%d",&n);
    if (n<1 || n>9)
    {
        printf("số cửu chương không hợp lệ");
    }else
    {
        bangcuuchuong(n);
    }
    return 0;
}