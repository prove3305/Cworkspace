#include <stdio.h> // 57 ~ 59

int main(void)
{
    printf("Be happy\n");
    printf("1234567890\n");
    printf("My friend\n");  // \n(개행, new line) 다음줄로 이동

    printf("Goot\bd\tchance\n");    // \b(백스페이스, backspace) 한 칸 왼쪽으로 이동
                                    // \t 4현재의 커서 위치에서 다음 tab 위치로 이동

    printf("Cow\rw\a\n");   // \r(캐리지 리턴, carriage return) 맨 앞으로 이동
                            // \a(알럿 경보, alert) 벨소리

    return 0;
}