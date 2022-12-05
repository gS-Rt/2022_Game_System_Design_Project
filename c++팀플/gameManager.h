#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <vector>
#include "storyBlock.h"
#include "storyBlolckQueue.h"
#include "player.h"
using namespace std;

class GameManager //게임 진행 관리
{
protected:
    StoryQueue *queue; //실행 예정 스토리 블록 큐
    bool closeGame = false; //게임 종료 트리거
    Player player; //플레이어 능력치 관리 클래스
    int num; //선택된 블록 인덱스 숫자
    int runCycle; //진행된 블록 수
    int pri; //직전에 삽입된 블록 인덱스 숫자

public:
    GameManager();

    void startGame();

    void selectNextBlock();

    void runStoryBlock();

    void CloseGame(); //종료 트리거 캡슐화

};