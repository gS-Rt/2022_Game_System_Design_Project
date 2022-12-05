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
    bool closeGame = false; //���� ���� Ʈ����
    Player player; //�÷��̾� �ɷ�ġ ���� Ŭ����
    int num; //���õ� ��� �ε��� ����
    int runCycle; //����� ��� ��
    int pri; //������ ���Ե� ��� �ε��� ����

public:
    GameManager();

    void startGame();

    void selectNextBlock();

    void runStoryBlock();

    void CloseGame(); //���� Ʈ���� ĸ��ȭ

};