/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {    
    // 정수 n을 입력받아 1부터 n까지의 정수의 합과 n!을 출력하는 프로그램을 작성하시오.
    int n = 0, sum = 0, fac = 1;
    scanf("%d", &n);
    for (int i = 1 ; i <= n ;i++){
        sum += i;
        fac *= i;
    }
    printf("%d\n%d\n", sum, fac);
    return 0;
}