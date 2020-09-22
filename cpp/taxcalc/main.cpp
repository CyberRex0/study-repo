#include <stdio.h>

int teika;

int main(void) {
    printf("’è‰¿‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢=");
    scanf("%d", &teika);
    
    int price_t8 = teika * (100 + 8) /100;
    int price_t10 = teika * (100 + 10)/100;
    int price_t15 = teika * (100 + 15)/100;

    printf("Á”ïÅ8%%‚İ‚Ì‰¿ŠiF%d‰~\n", price_t8);
    printf("Á”ïÅ10%%‚İ‚Ì‰¿ŠiF%d‰~\n", price_t10);
    printf("Á”ïÅ15%%‚İ‚Ì‰¿ŠiF%d‰~\n", price_t15);

    return 0;
}