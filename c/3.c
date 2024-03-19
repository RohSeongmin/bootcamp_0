/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 시간을 입력 받아 12시 전이라면 '오전', 12시 이후라면 '오후'를 출력하는 프로그램을 작성하시오.
    int t = 0;
    scanf("%d", &t);
    if(t >= 12){
        printf("PM\n");
    }
    else{
        printf("AM\n");
    }
    return 0;
}