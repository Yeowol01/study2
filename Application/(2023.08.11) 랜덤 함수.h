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
    printf("��ǻ�Ͱ� ������ �ִ� �� : ");

    scanf_s("%d", &answer);
}

void Render()
{
    if (computer == answer)
    {
        printf("\n���ӿ��� �¸��Ͽ����ϴ�.\n");
        exit(1);
    }
    else if ((computer > answer))
    {
        printf("\n��ǻ�Ͱ� ������ �ִ� ������ �۽��ϴ�.\n");
        life--;
    }
    else if ((computer < answer))
    {
        printf("\n��ǻ�Ͱ� ������ �ִ� ������ Ů�ϴ�.\n");
        life--;
    }
    if (life <= 0)
    {
        printf("\n���ӿ��� �й��Ͽ����ϴ�.\n");
    }
}
/*/

int main()
{
#pragma region ���� �Լ�
    /*/
    // 0 ~ 32767 ������ ���� ���� ��ȯ�ϴ� �Լ��Դϴ�.

    int seed = 0;

    // 1970 �� 1�� 1��
    srand(time(NULL));


    for (int i = 0; i < 10; i++)
    {
        seed = rand();
        printf("seed�� �� : %d \n", seed);
    }


    for (int i = 0; i < 10; i++)
    {
        seed = rand() % 10 + 1;
        printf("seed�� �� : %d \n", seed);
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
        printf("���� ��ȸ�� %d�� �Դϴ�.\n", chance--);
        printf("���ڸ� ���������� (1 ~ 50) : ");
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
            printf("�����Դϴ�! \n");
            break;
        }
        else
        {
            printf("���� �߻�");
        }
        if (chance == 0)
        {
            printf("�ƽ����� ��� ��ȸ�� ����ϼ̽��ϴ�. ����� �й��Դϴ�. \n");
        }
    }


    // ����� ���
    /*/
    // ���� ������ �ʱ�ȭ
    Init();

    while (life > 0)
    {
        // ���� ������Ʈ �Լ�
        Update();

        // ���� ������ �Լ�
        Render();
    }
    /*/
#pragma endregion


    return 0;
}
