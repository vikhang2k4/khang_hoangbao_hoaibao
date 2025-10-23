#include <stdio.h>
#include <math.h>

void giaipt2(float a, float b, float c)
{
    float del, x1, x2;

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                printf("Pt có voo so nghiem\n");
            else
                printf("Pt vo nghiem\n");
        }
        else
        {
            x1 = -c / b;
            printf("pt co 1 nghiem: x = %.2f\n", x1);
        }
    }
    else
    {
        del = b * b - 4 * a * c;

        if (del < 0)
        {
            printf("pt vo nghiem\n");
        }
        else if (del == 0)
        {
            x1 = -b / (2 * a);
            printf("pt cos nghiem kep: x1 = x2 = %.2f\n", x1);
        }
        else
        {
            x1 = (-b + sqrt(del)) / (2 * a);
            x2 = (-b - sqrt(del)) / (2 * a);
            printf("pt co 2 nghiemj phan biet:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }
}

int main()
{
    float a, b, c;

    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);

    giaipt2(a, b, c);

    return 0;
}
