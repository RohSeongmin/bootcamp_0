/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 해달 놀이방은 나이가 14세 이상 혹은 키가 160cm 이상이면 입장할 수 없다. 
    //사용자로부터 나이와 키를 입력받아 놀이방에 입장할 수 있는지를 판단하여 출력하는 프로그램을 작성하시오.
    int age = 0, height = 0;
    scanf("%d", &age);
    scanf("%d", &height);

    if( age >= 14 || height >= 160){
        printf("X\n");
    }
    else printf("O\n");

    return 0;
}