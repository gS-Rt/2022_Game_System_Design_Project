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
    while (true) //���� ��ϰ� ���� ��� ���õǸ� �ٽ� ��÷
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
    while (true) //���� ����
    {

        selectNextBlock();
        runStoryBlock();
        cout << "ü��: " << player.peekStat("hp")<<" , ��: "<< player.peekStat("money") << endl;

        if (runCycle == 5) //5�� ���� �� block4 Ȯ�� ����, �� �������� ���� �� �ʼ� ��� ���� ����
        {
            cout << "block4 ����" << endl;
            queue->inqueue(new Block4());
        }

        if (closeGame) //true�� �ݺ��� ����
        {
            break;
        }
    }
}