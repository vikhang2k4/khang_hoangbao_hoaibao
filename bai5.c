#include <stdio.h>

float tinh_tien_dien(int soDien)
{
    float tien;

    if (soDien <= 100)
        tien = soDien * 500;
    else if (soDien <= 150)
        tien = 100 * 500 + (soDien - 100) * 550;
    else if (soDien <= 350)
        tien = 100 * 500 + 50 * 550 + (soDien - 150) * 650;
    else
        tien = 100 * 500 + 50 * 550 + 200 * 650 + (soDien - 350) * 850;

    return tien;
}

int main()
{
    int soDien;
    float tien;

    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%d", &soDien);

    tien = tinh_tien_dien(soDien);

    printf("Tien dien phai tra: %.2f VND\n", tien);

    return 0;
}
