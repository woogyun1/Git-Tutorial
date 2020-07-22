#include <stdio.h>
#include <string.h>

void getMenu(char *s){
    
    if (strcmp(s, "월요일") == 0) {
        printf("\n%s: 청국장",s);
    } else if (strcmp(s, "화요일") == 0) {
        printf("\n%s: 된장",s);
    } else if (strcmp(s, "수요일") == 0) {
        printf("\n%s: 김치",s);
    } else if (strcmp(s, "목요일") == 0) {
        printf("\n%s: 멸치",s);
    } else if (strcmp(s, "금요일") == 0) {
        printf("\n%s: 라면",s);
    } else if (strcmp(s, "토요일") == 0) {
        printf("\n%s: 치킨",s);
    } else if (strcmp(s, "일요일") == 0) {
        printf("\n%s: 피자",s);
    }
    return;
}

int main() {
    char s[10];
    
    printf("요일을 입력해주세요(ex.월요일) : ");
    
    scanf("%s", s);

    
    getMenu(s);
    return 0;
}

