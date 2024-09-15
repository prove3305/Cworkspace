#include <stdio.h> // 66 ~ 67

int main(void)
{
    printf("%d\n", 12);     // 10진수 정수 상수 출력     
    printf("%d\n", 014);    // 8진수 정수 상수 출력     8진수는 0 
    printf("%d\n", 0xc);    // 16진수 정수 상수 출력    16진수는 0x를 붙인다.


    printf("%o\n", 12);     // 8진수로 출력하려면 %8
    printf("%x\n", 12);     // 16진수 소문자로 출력하려면 %x
    printf("%X\n", 12);     // 16진수 대문자로 출력하려면 %X

    return 0;
}