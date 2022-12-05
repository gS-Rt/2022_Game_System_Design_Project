#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "gameManager.h"
using namespace std;

void GameManager::selectNextBlock()
{
    //selectedStoryblock = new StoryBlock(0, "테스트 스크립트 입니다.", "1번 선택지", "2번 선택지");
    //다음 블록 배치 판단 알고리즘 작성 부분
}

void GameManager::runStoryBlock()
{

}

bool GameManager::isCloseGame() //종료 트리거 캡슐화
{
    return closeGame;
}