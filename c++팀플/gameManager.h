#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "storyBlock.h"
#include "storyBlolckQueue.h"
#include "player.h"
using namespace std;

class GameManager //게임 진행 관리
{
private:
    bool closeGame = false; //게임 종료 트리거
    Player player; //플레이어 능력치 관리 클래스
    StoryBlock* selectedStoryblock; //스토리 블록 생성 저장 변수

public:
    void selectNextBlock();

    void runStoryBlock();

    bool isCloseGame(); //종료 트리거 캡슐화

};