#include <stdio.h>

int teika;

int main(void) {
    printf("�艿����͂��Ă�������=");
    scanf("%d", &teika);
    
    int price_t8 = teika * (100 + 8) /100;
    int price_t10 = teika * (100 + 10)/100;
    int price_t15 = teika * (100 + 15)/100;

    printf("�����8%%���݂̉��i�F%d�~\n", price_t8);
    printf("�����10%%���݂̉��i�F%d�~\n", price_t10);
    printf("�����15%%���݂̉��i�F%d�~\n", price_t15);

    return 0;
}