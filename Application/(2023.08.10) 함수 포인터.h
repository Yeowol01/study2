#pragma once
#include <stdio.h>
#include <math.h>
#include <string.h>

#pragma region �Լ� ������
/*/
    // �Լ��� �ּҰ��� �����ϰ� ����ų �� �ִ� �����Դϴ�.

void Delegate()
{
    printf("�븮��~");
}

int Add(int x, int y)
{
    return x + y;
}

int Substract(int x, int y)
{
    return x - y;
}

int Multiple(int x, int y)
{
    return x * y;
}

int Divide(int x, int y)
{
    return x / y;
}

void Calculator(int x, int y, int (*cptr)  (int, int))
{
    printf("cptr �Լ��� ��� : %d\n", cptr(x, y));
}
/*/
#pragma endregion

void Palindrome(char string[]);

int main()
{
#pragma region �Լ� ������

    /*/
    // �Լ� �����ʹ� �Լ��� ��ȯ���� �Ű� ������ Ÿ���� ��ġ�ؾ� �ϸ�, �Լ� �����͸� ����Ͽ� �������� �޸𸮸� �Ҵ��� �� �����ϴ�.
    void (*fptr) ();
    // int (*cptr)  (int, int);


    cptr = Add;
    printf("cptr �Լ��� ��� : %d\n", cptr(10, 20));

    cptr = Substract;
    printf("cptr �Լ��� ��� : %d\n", cptr(10, 20));

    cptr = Multiple;
    printf("cptr �Լ��� ��� : %d\n", cptr(10, 20));

    cptr = Divide;
    printf("cptr �Լ��� ��� : % d\n", cptr(20, 20));


    // �� ������ �� ���
    Calculator(1, 1, Add);
    Calculator(20, 10, Substract);
    Calculator(5, 5, Multiple);
    Calculator(20, 20, Divide);

    fptr = Delegate;

    fptr();
    /*/
#pragma endregion

#pragma region �Ҽ� �Ǻ� �˰���
    /*/
    int number;
    int j = 1;

    printf("�Է��� ���� : ");
    scanf_s("%d", &number);

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            j = 0;
            break;
        }
    }

    if (j == 1)
    {
        printf("%d��(��) �Ҽ��Դϴ�.", number);
    }
    else
    {
        printf("%d��(��) �Ҽ��� �ƴմϴ�.", number);
    }
    /*/

    /*/
    // ����� ���
    int number = 0;
    int count = 0;

    scanf_s("%d", &number);

    for (int i = 2; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }

    if (count == 1)
    {
        printf("�Ҽ��Դϴ�.\n", number);
    }
    else
    {
        printf("�Ҽ��� �ƴմϴ�.\n", number);
    }
    /*/
#pragma endregion

#pragma region ȸ�� �Ǻ� �˰���

    int flag = 0;

    const char* content = "level";

    int size = strlen(content);

    // [l][e]   [v]    [e][l] 
    for (int i = 0; i < size / 2; i++)
    {
        if (content[i] == content[size - 1 - i])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("ȸ���Դϴ�.");
    }

    else
    {
        printf("ȸ���� �ƴմϴ�.");
    }

#pragma endregion
    return 0;
}