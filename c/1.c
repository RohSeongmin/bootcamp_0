/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 세 자리 정수를 입력 받아 역순으로 출력하는 프로그램을 작성하시오
    int num = 0, i = 0;
    scanf("%d", &num);
    
   while(num > 0){
        printf("%d", num % 10);
        num = num / 10;
    }

    return 0;
}