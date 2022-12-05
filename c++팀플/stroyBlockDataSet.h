#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "storyBlock.h"
#include "player.h"
#include "storyBlolckQueue.h"
using namespace std;

class Block0 :public StoryBlock
{
public:
    Block0()
    {
        script = "block0테스트 스르립트. block0테스트 스르립트. block0테스트 스르립트. block0테스트 스르립트."; //스크립트 초기화

        select1 = "1번 선택지"; //선택지 1
        select2 = "2번 선택지"; //선택지 2(선택)
        select3 = ""; //선택지 3(선택)

        result1 = "1번 결과문"; //선택지 1 결과
        result2 = "2번 결과문"; //선택지 2 결과(선택)
        result3 = ""; //선택지 3 결과(선택)

    }
    virtual void storyBlockFunction(Player& player); //플레이어 객체 참조로 값 변경 가능
};
class Block1 :public StoryBlock
{
public:
    Block1()
    {
        script = "block1테스트 스르립트테스트 스르립트테스트 스르립트테스트 스르립트테스트 스르립트"; //스크립트 초기화

        select1 = "1번 선택지"; //선택지 1
        select2 = ""; //선택지 2(선택)
        select3 = ""; //선택지 3(선택)

        result1 = "1번 결과문"; //선택지 1 결과
        result2 = ""; //선택지 2 결과(선택)
        result3 = ""; //선택지 3 결과(선택)

    }
    virtual void storyBlockFunction(Player& player); //플레이어 객체 참조로 값 변경 가능
};
class Block2 :public StoryBlock
{
public:
    Block2()
    {
        script = "block2테스트 스르립트테스트 스르립트테스트 스르립트테스트 스르립트테스트 스르립트"; //스크립트 초기화

        select1 = "1번 선택지"; //선택지 1
        select2 = "2번 선택지"; //선택지 2(선택)
        select3 = "3번 선택지"; //선택지 3(선택)

        result1 = "1번 결과문"; //선택지 1 결과
        result2 = "2번 결과문"; //선택지 2 결과(선택)
        result3 = "3번 선택지"; //선택지 3 결과(선택)

    }
    virtual void storyBlockFunction(Player& player); //플레이어 객체 참조로 값 변경 가능
};
class Block3 :public StoryBlock
{
public:
    Block3()
    {
        script = "block3테스트 스르립트테스트 스르립트테스트 스르립트테스트 스르립트테스트 스르립트테스트 스르립트"; //스크립트 초기화

        select1 = "1번 선택지"; //선택지 1
        select2 = "2번 선택지"; //선택지 2(선택)
        select3 = ""; //선택지 3(선택)

        result1 = "1번 결과문"; //선택지 1 결과
        result2 = "2번 결과문"; //선택지 2 결과(선택)
        result3 = ""; //선택지 3 결과(선택)

    }
    virtual void storyBlockFunction(Player& player); //플레이어 객체 참조로 값 변경 가능
};
class Block4 :public StoryBlock
{
public:
    Block4()
    {
        script = "block4테스트 스르립트테스트 스르립트테스트 스르립트테스트 스르립트테스트 스르립트테스트 스르립트테스트 스르립트테스트 스르립트테스트 스르립트"; //스크립트 초기화

        select1 = "1번 선택지"; //선택지 1
        select2 = "2번 선택지"; //선택지 2(선택)
        select3 = ""; //선택지 3(선택)

        result1 = "1번 결과문"; //선택지 1 결과
        result2 = "2번 결과문"; //선택지 2 결과(선택)
        result3 = ""; //선택지 3 결과(선택)

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};
