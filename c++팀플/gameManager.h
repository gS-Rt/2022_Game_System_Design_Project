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
    Player player; //플레이어 능력치 관리 클래스
    int num; //선택된 블록 인덱스 숫자
    int runCycle; //진행된 블록 수
    int pri[13]; //직전에 삽입된 블록 인덱스 숫자

public:
    GameManager()
    {
        queue = new StoryQueue;
        runCycle = 0;
        num = 0;
        for (int i = 0; i < 13; i++) { //최대 13개에서 최소 10개의 인카운터
            pri[i] = -1;
        }
    }

    void startGame();

    void selectNextBlock();

    void runStoryBlock();

    void CloseGame(GameManager gm); //종료 트리거 캡슐화

};