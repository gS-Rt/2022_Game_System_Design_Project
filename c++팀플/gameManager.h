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

class GameManager //���� ���� ����
{
protected:
    StoryQueue *queue; //���� ���� ���丮 ��� ť
    Player player; //�÷��̾� �ɷ�ġ ���� Ŭ����
    int num; //���õ� ��� �ε��� ����
    int runCycle; //����� ��� ��
    int pri[13]; //������ ���Ե� ��� �ε��� ����

public:
    GameManager()
    {
        queue = new StoryQueue;
        runCycle = 0;
        num = 0;
        for (int i = 0; i < 13; i++) { //�ִ� 13������ �ּ� 10���� ��ī����
            pri[i] = -1;
        }
    }

    void startGame();

    void selectNextBlock();

    void runStoryBlock();

    void CloseGame(GameManager gm); //���� Ʈ���� ĸ��ȭ

};