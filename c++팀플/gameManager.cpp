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
#include "storyBlolckQueue.h"
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
            if (num != 8 && pri[i] == num) {
                isSame = true;
                break;
            }
        }

        if (!isSame) {
            pri[runCycle] = num;
            break;
        }
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

void GameManager::startGame()
{
    queue->inqueue(new BlockParent());
    queue->inqueue(new BlockChoiceStat());
    queue->inqueue(new BlockStoryStart());

    while (true) //���� ����
    {
        if (player.peekStat("hp") <= 0) { //hp�� �� ������ �������
            player.changeStat("hp", player.peekStat("hp"));
            queue->inqueue(new BlockEndingDie());
        }

        if (player.getGameOver()) //true�� �ݺ��� ����
        {
            break;
        }

        if (runCycle == 13)
        {
            queue->inqueue(new BlockMainStory()); //13��° ��ī���� ���Ĵ� ���� ���丮 ����
        }

        system("cls");
        cout << "ü��: " << player.peekStat("hp") << " , ��: " << player.peekStat("money") << endl;
        selectNextBlock();
        runStoryBlock();
    }
}
