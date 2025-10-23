#include<stdio.h>
void InTamGiac(int x){
    for(int i=1;i<=x;i++) {
        for(int j=i;j<=i;j++){
            printf("%d", j);
        }
        printf("\n");
    }
}
int main(){
    int x;
    printf("Nhập vào x: ");
    scanf("%d",&x);
    IntamGiac(x);
    return 0;
}