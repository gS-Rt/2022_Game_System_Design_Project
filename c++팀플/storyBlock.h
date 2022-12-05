#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <vector>
#include "player.h"
using namespace std;

class StoryQueue;

class StoryBlock //스토리 블록 클래스
{
protected:
    string script; //스토리 스크립트
    string select1; //선택지 1~3개
    string select2;
    string select3;

    string result1;
    string result2;
    string result3; //각 선택지 선택했을 때 결과 스크립트

    int playerSelect; //플레이어 선택지 입력 값
    int selectCount; //선택지 개수, 선택지 출력 시 값 생성, 플레이어 입력값 제한에 사용

    StoryBlock* nextBlock; //블록 큐 연결링크
public:
    StoryBlock()
    {
        nextBlock = NULL;
        playerSelect = 0;
        selectCount = 0;
    }
    StoryBlock* getNext() //큐 관련 메소드
    {
        return this->nextBlock;
    }
    void setNext(StoryBlock* next)
    {
        nextBlock = next;
    }

    void printBlock(); //스크립트 및 선택지 출력
    void scanPlayerInput(); //값 입력 받는 함수
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //블록의 스탯 변화 코드 작성용 가상함수
    void printResult();

};