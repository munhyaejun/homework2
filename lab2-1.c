#include <stdio.h>
int main()
{
    char charType;
    int integerType;
    float floatType;
    double doubleType;
    printf("[----- [Munhyaejun] [2019015035] -----]\n");
    printf("Size of char: %ld byte\n", sizeof(charType));      // char형 변수 charType의 크기를 표기했다.
                                                               // char형 변수의 크기는 1byte이므로 1이 출력될 것이다.
    printf("Size of int: %ld bytes\n", sizeof(integerType));   // int형 변수 integerType의 크기를 표기했다.
                                                               // int형 변수의 크기는 4byte이므로 4가 출력될 것이다.
    printf("Size of float: %ld bytes\n", sizeof(floatType));   // float형 변수 floatType의 크기를 표기했다.
                                                               // float형 변수의 크기는 4byte므로 4가 출력될 것이다.
    printf("Size of double: %ld bytes\n", sizeof(doubleType)); // double형 변수 doubleType의 크기를 표기했다.
                                                               // double형 변수의 크기는 8byte이므로 8이 출력될 것이다.
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n", sizeof(char));      // 변수형 char의 크기를 출력한다.
                                                           // char형의 크기는 1byte이므로 1이 출력될 것이다.
    printf("Size of int: %ld bytes\n", sizeof(int));       // 변수형 int의 크기를 출력한다.
                                                           // int형의 크기는 4byte이므로 4가 출력될 것이다.
    printf("Size of float: %ld bytes\n", sizeof(float));   // 변수형 float의 크기를 출력한다.
                                                           // float형의 크기는 4byte이므로 4가 출력될 것이다.
    printf("Size of double: %ld bytes\n", sizeof(double)); // 변수형 double의 크기를 출력한다.
                                                           // double형의 크기는 8byte이므로 8이 출력될 것이다.
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n", sizeof(char *));      // char형 변수를 가리키는 포인터 변수의 크기를 출력한다.
                                                              // 포인터 변수는 가리키는 자료형에 상관없이 8byte(주소의 크기)이므로
                                                              // 8이 출력될 것이다.
    printf("Size of int*: %ld bytes\n", sizeof(int *));       // int형 변수를 가리키는 포인터 변수의 크기를 출력한다.
                                                              // 포인터 변수이므로 8이 출력될 것이다.
    printf("Size of float*: %ld bytes\n", sizeof(float *));   // float형 변수를 가리키는 포인터 변수의 크기를 출력한다.
                                                              // 포인터 변수이므로8이 출력될 것이다.
    printf("Size of double*: %ld bytes\n", sizeof(double *)); // double형 변수를 가리키는 포인터 변수의 크기를 출력한다.
                                                              // 포인터 변수이므로8이 출력될 것이다.
    return 0;
}