#include <stdio.h>

int main(void)
{
    char fruit[20] = "strawberry";

    printf("딸기 : %s\n", fruit); 
    printf("딸기쨈 : %s %s\n", fruit, "jam");

    return 0;

    // char 배열은 %s로 출력
}