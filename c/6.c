/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 사용자로부터 알파벳 문자 하나를 입력 받아서 a, e, i, o, u일 경우 O를 이 외의 문자일 경우 X를 출력하시오.
    char alpha;
    scanf("%c", &alpha);
    if( alpha == 'a' || alpha == 'e'|| alpha == 'i' || alpha == 'o' || alpha == 'u'){
        printf("O\n");
    }
    else printf("X\n");

    return 0;
}