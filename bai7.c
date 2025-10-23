#include<stdio.h>

int tinhgiaithua(int n)
{
    int gt =1;
    for (int i = 1; i<=n; i++)
    {
        gt = gt *1 ;
    }
    return gt;
}
int main()
{
    int n;
    printf("nhap n can tinh giai thua: ");
    scanf("%d",&n);

    printf("giai thua cua %d la %d\n", n, tinhgiaithua(n));
    return 0;
}
