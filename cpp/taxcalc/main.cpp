#include <stdio.h>

int teika;

int main(void) {
    printf("定価を入力してください=");
    scanf("%d", &teika);
    
    int price_t8 = teika * (100 + 8) /100;
    int price_t10 = teika * (100 + 10)/100;
    int price_t15 = teika * (100 + 15)/100;

    printf("消費税8%%込みの価格：%d円\n", price_t8);
    printf("消費税10%%込みの価格：%d円\n", price_t10);
    printf("消費税15%%込みの価格：%d円\n", price_t15);

    return 0;
}