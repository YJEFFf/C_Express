#include <stdio.h>

int main()
{
    char c1, c2, c3, c4;
    unsigned int ui = 0x00000000;

    printf("첫번째 문자를 입력하시오: ");
    scanf(" %c", &c1);

    printf("두번째 문자를 입력하시오: ");
    scanf(" %c", &c2);

    printf("세번째 문자를 입력하시오: ");
    scanf(" %c", &c3);

    printf("네번째 문자를 입력하시오: ");
    scanf(" %c", &c4);

    ui = ui | c1;
    ui = ui | (c2 << 8);
    ui = ui | (c3 << 16);
    ui = ui | (c4 << 24);

    printf("결과값 : %x\n", ui);

    return 0;
}