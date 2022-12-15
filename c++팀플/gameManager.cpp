#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "storyBlock.h"
#include "gameManager.h"
#include "stroyBlockDataSet.h"
#include "player.h"
using namespace std;

void GameManager::selectNextBlock()
{
    StoryBlock* selectBlock = NULL;
    while (true) //���� ��ϰ� ���� ��� ���õǸ� �ٽ� ��÷
    {
        if (!(queue->isEmpty()))
            return;

        bool isSame = false;

        srand((unsigned int)time(NULL));
        num = rand() % 15;

        if (num == 8)
            continue;

        for (int i = 0; i < runCycle + 1; i++) {
            if (pri[i] == num) {
                isSame = true;
                break;
            }
        }

        break;
    }

    if (num == 0) //num�� �´� �� ��ü ����
        selectBlock = new Block0();
    else if (num == 1)
        selectBlock = new Block1();
    else if (num == 2)
        selectBlock = new Block2();
    else if (num == 3)
        selectBlock = new Block3();
    else if (num == 4)
        selectBlock = new Block4();
    else if (num == 5)
        selectBlock = new Block5();
    else if (num == 6)
        selectBlock = new Block6();
    else if (num == 7)
        selectBlock = new Block7();
    else if (num == 8)
        selectBlock = new Block8();
    else if (num == 9)
        selectBlock = new Block9();
    else if (num == 10)
        selectBlock = new Block10();
    else if (num == 11)
        selectBlock = new Block11();
    else if (num == 12)
        selectBlock = new Block12();
    else if (num == 13)
        selectBlock = new Block13();
    else if (num == 14)
        selectBlock = new Block14();
    else if (num == 15)
        selectBlock = new Block15();
  
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
    delete(temp); //��� ���� ���� ����
}

void GameManager::CloseGame() //�����ϸ� �ݺ��� ����
{
    closeGame = true;
}

void GameManager::startGame()
{
    queue->inqueue(new BlockChoiceStat());
    queue->inqueue(new BlockStoryStart());

    while (true) //���� ����
    {

        selectNextBlock();
        runStoryBlock();
        cout << "ü��: " << player.peekStat("hp")<<" , ��: "<< player.peekStat("money") << endl;

        if (runCycle == 10) //5�� ���� �� block4 Ȯ�� ����, �� �������� ���� �� �ʼ� ��� ���� ����
        {
            cout << "block4 ����" << endl;
            queue->inqueue(new Block4());
            closeGame = true;
        }

        if (closeGame) //true�� �ݺ��� ����
        {
            break;
        }
    }
}
