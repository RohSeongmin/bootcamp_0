/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 입력한 달에 존재하는 날의 수를 출력하는 프로그램을 작성하시오.
    int year = 0, month = 0;
    scanf("%d", &year);
    scanf("%d", &month);
    if( month == 2){
        if(year % 4 == 0 && year % 100 !=0 || year % 400 == 0){
            printf("29");
        }
        else printf("28");
    }
    else if (month == 4 ||month == 6 ||month == 9 ||month == 11){
        printf("30");
    }
    else printf("31");
    

    return 0;
}