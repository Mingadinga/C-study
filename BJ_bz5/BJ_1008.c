#include <stdio.h>

int main(void) {
    double a, b;
    scanf("%lf %lf",&a, &b);
    printf("%.9lf", a/b);
    return 0;
}

/*
    C의 실수형 자료 타입
    - float : 4바이트. 소수점 이하 6-7자리 정확
    - double : 8바이트. 소수점 이하 15-16자리 정확
    - long double : double보다 크거나 같음
    
    출력 형식 지정자
    - float : %f
    - double : %lf
    - 지수 : %e
*/