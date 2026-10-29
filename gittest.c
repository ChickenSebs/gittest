
#include <stdio.h>
// git test
///  테스트 하균
// 함수 선언
//lhj
void menu1();
void menu2();
void menu3();
void menu4();

int main()
{
    int menu = -1;

    while (menu != 0)
    {
        printf("\n===== 메뉴 선택 =====\n");
        printf("1. 이해준 메뉴 1\n");
        printf("2. 노원종 메뉴 2\n");
        printf("3. 유동호 메뉴 3\n");
        printf("4. 김하균 메뉴 4\n");
        printf("0. 종료\n");
        printf("=====================\n");
        printf("메뉴 번호 입력: ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            menu1();
            break;

        case 2:
            menu2();
            break;

        case 3:
            menu3();
            break;

        case 4:
            menu4();
            break;

        case 0:
            printf("프로그램 종료\n");
            break;

        default:
            printf("잘못된 메뉴 번호입니다.\n");
            break;
        }
    }

    return 0;
}

// 메뉴별 함수 정의
void menu1()
{
    printf("이해준 나라에 오신걸 환영합니다.\n");
}

void menu2()
{
    printf("2번 메뉴 실행\n");
}

void menu3()
{
    printf("3번 메뉴 실행\n");
}

void menu4()
{
    printf("4번 메뉴 실행\n");
}

void menu5()
{
    printf("이성민입니다.\n");
}