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
    //selectedStoryblock = new StoryBlock(0, "�׽�Ʈ ��ũ��Ʈ �Դϴ�.", "1�� ������", "2�� ������");
    //���� ��� ��ġ �Ǵ� �˰��� �ۼ� �κ�
}

void GameManager::runStoryBlock()
{

}

bool GameManager::isCloseGame() //���� Ʈ���� ĸ��ȭ
{
    return closeGame;
}