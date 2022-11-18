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

class GameManager //���� ���� ����
{
private:
    bool closeGame = false; //���� ���� Ʈ����
    Player player; //�÷��̾� �ɷ�ġ ���� Ŭ����
    StoryBlock* selectedStoryblock; //���丮 ��� ���� ���� ����

public:
    void selectNextBlock();

    void runStoryBlock();

    bool isCloseGame(); //���� Ʈ���� ĸ��ȭ

};