#include <stdio.h>

float tinhdiemtb(float t, float v, float av)
{
    return (t * 2 + v * 2 + av) / 5;
}
void xeploai(float dtb)
{
    if (dtb < 3)
        printf("điểm tb là: %d học lực kém", dtb);
    else if (dtb < 5)
    {
        printf("điểm tb là: %d học lực tb", dtb);
    }
    else if (dtb < 8)
    {
        printf("điểm tb là: %d học lực khá", dtb);
    }
    else
        printf("điểm tb là: %d học lực giỏi", dtb);
}
int main()
{
    float t, v, av, dtb;
    printf("Nhập điểm toán: ");
    scanf("%f", &t);
    printf("Nhập điểm văn: ");
    scanf("%f", &v);
    printf("Nhập điểm anh van: ");
    scanf("%f", &av);

    dtb = tinhdiemtb(t, v, av);
    printf("điểm tb là %.2f", dtb);
    xeploai(dtb);
    return 0;
}