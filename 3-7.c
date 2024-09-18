#include <stdio.h>
#include <string.h> // strcpy(string copy) 문자열을 다룰 수 있는 string.h 헤더 파일 포함

int main(void)
{
    char fruit[20] = "strawberry";

    printf("%s\n", fruit);
    strcpy(fruit, "banana"); // fruit에 banana 복사
    printf("%s\n", fruit); // banana 출력

    return 0;
}