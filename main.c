#include "mylib.h"

void menu(){
    printf("*** MENU ***\n");
    printf("1- Giai pt bac 2\n");
    printf("2- Xem Ket qua hoc luc\n");
    printf("3- Tinh tien dien\n");
    printf("4- In bang cuu chuong\n");
    printf("6- Tinh giai thua\n");
    printf("7- Hien thi ra man hinh\n");
    printf("8- Nhap tu 1 den n\n");
    printf("9- In Day so Fibonacci\n");
    printf("10- In ra man hinh\n");
    printf("------------------\n");
    printf("chon STT chuc nang: \n");
    printf("------------------\n");
    int c;
    scanf("%d",&c);

    switch (c)
    {
    case 1:
        giaipt2()
        menu()
        break;
    case 2:
        tinhdiemtb()
        menu()
        break;
    case 3:
        tinh_tien_dien()
        menu()
        break;
    case 4:
        bangcuuchuong()
        menu()
        break;
    case 5:
        tinhgiaithua()
        menu()
        break;
    case 6:
        hienthi()
        menu()
        break;
    case 7:
        NhapTuanTu()
        menu()
        break;
    case 8:
        InFibo()
        menu()
        break;
    case 9:
        InTamGiacSao()
        Menu()
        break;
    
    default:
        menu();
        break;
    }

}

int main(){
    menu();
    return 0;
}
