#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "storyBlock.h"
using namespace std;

StoryBlock::StoryBlock()
{
    this->script = "스크립트 입력 없음";
}

StoryBlock::StoryBlock(int blockType, string script, string select1)
{
    this->blockType = blockType;
    this->script = script;
    this->select1 = select1;
}

StoryBlock::StoryBlock(int blockType, string script, string select1, string select2)
{
    this->blockType = blockType;
    this->script = script;
    this->select1 = select1;
    this->select2 = select2;
}

StoryBlock::StoryBlock(int blockType, string script, string select1, string select2, string select3)
{
    this->blockType = blockType;
    this->script = script;
    this->select1 = select1;
    this->select2 = select2;
    this->select3 = select3;
}

void StoryBlock::printNormalBlock()
{
    cout << script << endl;
    if (!select1.empty())
        cout << "1. " << select1 << endl;
    if (!select2.empty())
        cout << "2. " << select2 << endl;
    if (!select3.empty())
        cout << "3. " << select3 << endl;
}

void StoryBlock::scanPlayerInput()
{
    cout << endl << "당신의 선택은... ";
    cin >> playerSelect;
}