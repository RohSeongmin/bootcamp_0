/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 나이를 입력받아 61세 이상이면 노인 할인을 해주는 교통카드 단말기 프로그램을 작성하시오.
    int age = 0;
    scanf("%d", &age);
    if(age >= 61){
        printf("DISCOUNT\n");
    }
    printf("BOARD\n");

    return 0;
}