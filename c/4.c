/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 점수를 입력받아 점수에 따라 아래와 같이 등급을 출력하는 프로그램을 작성하시오.
    int score = 0;
    scanf("%d", &score);
    if(score >=90 && score <= 100){
        printf("A\n");
    }
    else if( score>=80 && score <= 90){
        printf("B\n");
    }
    else if( score>=70 && score <= 80){
        printf("C\n");
    }
    else if( score>=60 && score <= 70){
        printf("D\n");
    }
    else{
        printf("F\n");
    }
    return 0;
}