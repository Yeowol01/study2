#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>


#define FG FOREGROUND_GREEN

void SetColorOne(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void ReadTextFile(const char* filename)
{
    FILE* readfile = fopen(filename, "r");

    char buffer[10000] = { 0, };

    // fread()
    // 첫 번째 매개변수 : 크기를 가지는 배열을 가리키는 포인터입니다.
    // 두 번째 매개변수 : 읽어들일 원소의 크기이며, 단위는 바이트입니다.
    // 세 번째 매개변수 : 읽어들일 원소들의 개수로 각 원소의 크기입니다.
    // 네 번째 매갭변수 : 데이터를 입력받을 스트림의 FILE 객체를 가리키는 포인터입니다.
    fread(buffer, 1, 10000, readfile);
    printf("%s", buffer);

    fclose(readfile);
}

int main()
{
    SetColorOne(FG);

#pragma region 파일 입출력
    /*/
    // 보조 기억 장치(디스크)로부터 데이터를 읽어오거나 저장하는 과정입니다.

    // fopen("파일 이름", "파일 모드")
    // "w" : 파일 쓰기
    FILE* filePtr = fopen("data.txt", "w");

    char content[] = "Content";

    fputs(content, filePtr);

    FILE* fileReader = fopen("data.txt", "r");
    fgets(content, sizeof(content), fileReader);
    printf("%s", content);

    fclose(fileReader); // 파일 닫아주기
    /*/
#pragma endregion

    //ReadTextFile("Resourecs/Dragon.txt");

    while (1)
    {
        ReadTextFile("Resourecs/data.txt");

        system("cls");
    }

    return 0;
}
