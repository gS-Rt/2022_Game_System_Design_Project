#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "gameManager.h"
#include "stroyBlockDataSet.h"
#include "player.h"
using namespace std;

void GameManager::selectNextBlock()
{
    StoryBlock* selectBlock = NULL;
    while (true) //이전 블록과 같은 블록 선택되면 다시 추첨
    {
        srand((unsigned int)time(NULL));
        num = rand() % 4;
        if (pri == num)
        {
            continue;
        }
        else
            break;
        break;
    }
    pri = num;

    if (num == 0) //num에 맞는 블럭 객체 생성
        selectBlock = new Block0();
    else if (num == 1)
        selectBlock = new Block1();
    else if (num == 2)
        selectBlock = new Block2();
    else if (num == 3)
        selectBlock = new Block3();
    else if (num == 4)
        selectBlock = new Block4();
  
    queue->inqueue(selectBlock);
    
}

void GameManager::runStoryBlock()
{
    StoryBlock* temp = queue->dequeue();
    temp->printBlock();
    temp->scanPlayerInput();
    temp->storyBlockFunction(player, queue);
    Sleep(1000);
    temp->printResult();
    runCycle++;
    delete(temp); //출력 끝난 블럭은 삭제
}

void GameManager::CloseGame() //실행하면 반복문 종료
{
    closeGame = true;
}

void GameManager::startGame()
{
    while (true) //메인 루프
    {

        selectNextBlock();
        runStoryBlock();
        cout << "체력: " << player.peekStat("hp")<<" , 돈: "<< player.peekStat("money") << endl;

        if (runCycle == 5) //5턴 종료 후 block4 확정 삽입, 이 로직으로 진행 중 필수 블록 삽입 가능
        {
            cout << "block4 삽입" << endl;
            queue->inqueue(new Block4());
        }

        if (closeGame) //true면 반복문 종료
        {
            break;
        }
    }
}