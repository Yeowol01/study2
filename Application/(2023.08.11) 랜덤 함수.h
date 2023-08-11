#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define FG FOREGROUND_GREEN

void SetColorOne(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

/*/
int life;
int computer;
int answer;

void Init()
{
    srand(time(NULL));

    life = 5;
    computer = rand() % 50 + 1;
}

void Update()
{
    printf("컴퓨터가 가지고 있는 값 : ");

    scanf_s("%d", &answer);
}

void Render()
{
    if (computer == answer)
    {
        printf("\n게임에서 승리하였습니다.\n");
        exit(1);
    }
    else if ((computer > answer))
    {
        printf("\n컴퓨터가 가지고 있는 값보다 작습니다.\n");
        life--;
    }
    else if ((computer < answer))
    {
        printf("\n컴퓨터가 가지고 있는 값보다 큽니다.\n");
        life--;
    }
    if (life <= 0)
    {
        printf("\n게임에서 패배하였습니다.\n");
    }
}
/*/

int main()
{
#pragma region 랜덤 함수
    /*/
    // 0 ~ 32767 사이의 난수 값을 반환하는 함수입니다.

    int seed = 0;

    // 1970 년 1월 1일
    srand(time(NULL));


    for (int i = 0; i < 10; i++)
    {
        seed = rand();
        printf("seed의 값 : %d \n", seed);
    }


    for (int i = 0; i < 10; i++)
    {
        seed = rand() % 10 + 1;
        printf("seed의 값 : %d \n", seed);
    }
    /*/
#pragma endregion

#pragma region Up Down Game

    srand(time(NULL));
    int number = rand() % 50 + 1;
    int answer = 0;
    int chance = 5;

    while (chance > 0)
    {
        SetColorOne(FG);
        printf("남은 기회는 %d번 입니다.\n", chance--);
        printf("숫자를 맞혀보세요 (1 ~ 50) : ");
        scanf_s("%d", &answer);

        if (answer > number)
        {
            printf("Down \n\n");
        }
        else if (answer < number)
        {
            printf("Up \n\n");
        }
        else if (answer == number)
        {
            printf("정답입니다! \n");
            break;
        }
        else
        {
            printf("오류 발생");
        }
        if (chance == 0)
        {
            printf("아쉽지만 모든 기회를 사용하셨습니다. 당신의 패배입니다. \n");
        }
    }


    // 강사님 방법
    /*/
    // 게임 데이터 초기화
    Init();

    while (life > 0)
    {
        // 게임 업데이트 함수
        Update();

        // 게임 렌더링 함수
        Render();
    }
    /*/
#pragma endregion


    return 0;
}
