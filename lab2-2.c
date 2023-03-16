#include <stdio.h>
int main()
{
    int i;
    int *ptr;
    int **dptr;
    i = 1234;                                                   // i에는 1234라는 값이 저장되어 있다.
    printf("[----- [Munhyaejun] [2019015035] -----]\n");
    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);                            // i에는 1234가 저장되어 있으므로 1234가 출력된다.
    printf("address of i == %p\n", &i);                         // i의 주소는 변수 선언 시 정해졌으므로 i의 주소가 출력될 것이다.
    printf("value of ptr == %p\n", ptr);                        // ptr의 값은 정해지지 않았으므로 쓰레기 값이 출력될 것이다.
    printf("address of ptr == %p\n", &ptr);                     // ptr의 주소는 변수 선언 시 정해졌으므로 ptr의 주소가 출력될 것이다.
    ptr = &i; /* ptr is now holding the address of i */         // ptr이 i를 가리킨다는 것이 추가되었다.
    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);                            // i에는 1234가 저장되어 있으므로 1234가 출력된다.
    printf("address of i == %p\n", &i);                         // i의 주소는 변함 없으므로 i의 주소가 출력될 것이다.
    printf("value of ptr == %p\n", ptr);                        // ptr의 값이 정해졌으므로 위와 같이 i의 주소가 출력될 것이다.
    printf("address of ptr == %p\n", &ptr);                     // ptr의 주소는 변함 없으므로 ptr의 주소가 출력될 것이다.
    printf("value of *ptr == %d\n", *ptr);                      // ptr이 i를 가리키므로 i가 가진 값인 1234가 출력될 것이다.
    dptr = &ptr; /* dptr is now holding the address of ptr */   // dptr이 ptr을 가리킨다는 것이 추가되었다.
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);                            // i에는 1234가 저장되어 있으므로 1234가 출력된다.
    printf("address of i == %p\n", &i);                         // i의 주소는 변함 없으므로 i의 주소가 출력될 것이다.
    printf("value of ptr == %p\n", ptr);                        // ptr의 값은 변함 없으므로 i의 주소가 출력될 것이다.
    printf("address of ptr == %p\n", &ptr);                     // ptr의 주소는 변함 없으므로 ptr의 주소가 출력될 것이다.
    printf("value of *ptr == %d\n", *ptr);                      // ptr은 변하지 않았으므로, i가 가진 값인 1234가 출력될 것이다.
    printf("value of dptr == %p\n", dptr);                      // dptr은 ptr을 가리키므로, ptr의 주소가 출력될 것이다.
    printf("address of dptr == %p\n", &dptr);                   // dptr의 주소는 선언 시 정해졌으므로 dptr의 주소가 출력될 것이다.
    printf("value of *dptr == %p\n", *dptr);                    // dptr은 ptr을 가리키므로, ptr이 가진 값인 i의 주소가 출력될 것이다.
    printf("value of **dptr == %d\n", **dptr);                  // dptr은 ptr을, ptr은 i를 가리키므로 i가 가진 값인 1234가 출력될 것이다.
    *ptr = 7777; /* changing the value of *ptr */               // ptr에서 포인터 참조하여 i값을 7777로 변경한다.
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);                            // i 값이 변경되었으므로 7777이 출력된다.
    printf("value of *ptr == %d\n", *ptr);                      // ptr의 값은 변함 없지만, i의 값이 변경되었으므로 i의 값인 7777이 출력될 것이다.
    printf("value of **dptr == %d\n", **dptr);                  // 마찬가지로, dptr의 값은 변함 없지만, i가 변경되었으므로 7777이 출력될 것이다.
    **dptr = 8888; /* changing the value of **dptr */           // dptr에서 두번 포인터 참조하여 i값을 8888로 변경한다.
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);                            // i 값이 변경되었으므로 8888이 출력된다.
    printf("value of *ptr == %d\n", *ptr);                      // ptr의 값은 변함 없지만, i의 값이 변경되었으므로 i의 값인 8888이 출력될 것이다.
    printf("value of **dptr == %d\n", **dptr);                  // 마찬가지로, dptr의 값은 변함 없지만, i가 변경되었으므로 8888이 출력될 것이다.
    return 0;
}