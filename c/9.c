/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 양의 정수 n을 입력 받아 1부터 n까지의 합을 출력하는 프로그램을 작성하시오.
    int n = 0, sum = 0;
    scanf("%d", &n);
    while( n <= 0){
        printf("X\n");
        scanf("%d", &n);
    }

    for(int i = 1; i <= n ; i ++){
        sum += i;
    }
    printf("%d\n", sum);

    return 0;
}