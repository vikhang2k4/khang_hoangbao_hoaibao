#include<stdio.h>
void NhapTuanTu(int n){
    int so;
    for(int i=1;i<=n;i++) {
        do{
            printf("Nhập số thứ %d: ",i);
            scanf("%d",&so);
            if (so!=i);
                printf("Sai ! Hãy nhập lại số %d \n",i)
        }
        while (so!=i);
    }
    printf("Bạn đã nhập đúng từ 1 đến %d \n",n);
}
int main(){
    int n;
    printf("Nhập vào n: ");
    scanf("%d",&n);
    NhapTuanTu(n);
    return 0;
}