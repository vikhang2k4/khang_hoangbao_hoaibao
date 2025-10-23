#include<stdio.h>
void InTamGiacSao(int n){
    for(int i; i<=n; i++){
        for(int j; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("Nhập n: ");
    scanf("%d",&n);
    InTamGiacSao(n);
    return 0;
}