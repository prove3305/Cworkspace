#include <stdio.h> // 68 ~ 69

int main(void)  /* 지수 형태의 출력은 %ln  
                소수점 형태의 출력은 %lf      */
{
    printf("%.1lf\n", 1e6);     //소수점 형태의 출력은 %lf
    printf("%.7lf\n", 3.14e-5);     
    printf("%le\n", 0.0000314);     // 소수점 형태의 실수를 지수 형태로 출력
    printf("%.2le\n", 0.0000314);   // 지수 형태로 소수점 이하 둘째 자리까지 출력

    return 0;  
}