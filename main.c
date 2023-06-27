#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2, result, operator;
    printf("ilk sayiyi girin: ");
    scanf_s("%d", &num1);
    result = num1;
    while (1) {
        printf("bir operator secin\n");
        printf("1-Toplama\n");
        printf("2-Cikartma\n");
        printf("3-Carpma\n");
        printf("4-Bolme\n");
        printf("5-Usalma\n");
        printf("6-Karekok alma\n");
        if (result != num1) {
            printf("0-sonucu dondur\n");
        }
        while (1) {
            scanf_s("%d", &operator);
            if (operator >= 0 && operator <= 6) {
                break;
            }
            printf("Lutfen 0-6 araliginda bir sayi girin.\n");
        }
        if (operator == 0) {
            break;
        }
        if (operator != 6) {
            printf("Sonraki sayiyi girin: ");
            scanf_s("%d", &num2);
        }
        switch (operator) {
        case 1:
            result += num2;
            break;
        case 2:
            result -= num2;
            break;
        case 3:
            result *= num2;
            break;
        case 4:
            result /= num2;
            break;
        case 5:
            result = pow(result, num2);
            break;
        case 6:
            result = sqrt(result);
            break;
        default:
            printf("Gecersiz operator\n");
        }

    }
    printf("Sonuc: %d\n", result);
}
