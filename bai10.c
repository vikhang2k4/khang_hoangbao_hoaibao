#include<stdio.h>
void InFibo(int n){
    int a=0, b=1, c;
    printf("Dãy Fibonacci nhỏ hơn %d là: ",n);
    while(a<n){
        printf("%d",a);
        c=a+b
        a=b
        b=c;
    }
    printf("\n")
}
int main(){
    int n;
    printf("Nhập n: ");
    scanf("%d",&n)
    InFibo(n);
    return 0;
}