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

StoryBlock::StoryBlock(int blockType, string script, string select1, vector<int> statType1, vector<int> changeValue1, string result1)
{
    this->blockType = blockType;
    this->script = script;
    this->select1 = select1;

    for (int i = 0; i < statType1.size(); i++)
        this->statType1.push_back(statType1[i]);
    for (int i = 0; i < changeValue1.size(); i++)
        this->statType1.push_back(changeValue1[i]);

    this->result1 = result1;
}

StoryBlock::StoryBlock(int blockType, string script, string select1, string select2, vector<int> statType1, vector<int> changeValue1, vector<int> statType2, vector<int> changeValue2, string result1, string result2)
{
    this->blockType = blockType;
    this->script = script;
    this->select1 = select1;
    this->select2 = select2;

    for (int i = 0; i < statType1.size(); i++)
        this->statType1.push_back(statType1[i]);
    for (int i = 0; i < changeValue1.size(); i++)
        this->statType1.push_back(changeValue1[i]);

    for (int i = 0; i < statType2.size(); i++)
        this->statType2.push_back(statType2[i]);
    for (int i = 0; i < changeValue2.size(); i++)
        this->statType2.push_back(changeValue2[i]);

    this->result1 = result1;
    this->result2 = result2;
}

StoryBlock::StoryBlock(int blockType, string script, string select1, string select2, string select3, vector<int> statType1, vector<int> changeValue1, vector<int> statType2, vector<int> changeValue2, vector<int> statType3, vector<int> changeValue3, string result1, string result2, string result3)
{
    this->blockType = blockType;
    this->script = script;
    this->select1 = select1;
    this->select2 = select2;
    this->select3 = select3;

    for (int i = 0; i < statType1.size(); i++)
        this->statType1.push_back(statType1[i]);
    for (int i = 0; i < changeValue1.size(); i++)
        this->statType1.push_back(changeValue1[i]);

    for (int i = 0; i < statType2.size(); i++)
        this->statType2.push_back(statType2[i]);
    for (int i = 0; i < changeValue2.size(); i++)
        this->statType2.push_back(changeValue2[i]);

    for (int i = 0; i < statType3.size(); i++)
        this->statType3.push_back(statType3[i]);
    for (int i = 0; i < changeValue3.size(); i++)
        this->statType3.push_back(changeValue3[i]);

    this->result1 = result1;
    this->result2 = result2;
    this->result3 = result3;
}

void StoryBlock::printNormalBlock()
{
    selectCount = 0;
    cout << script << endl << endl;
    if (!select1.empty())
    {
        cout << "1. " << select1 << endl;
        selectCount++;
    }
    if (!select2.empty())
    {
        cout << "2. " << select2 << endl;
        selectCount++;
    }
    if (!select3.empty())
    {
        cout << "3. " << select3 << endl;
        selectCount++;
    }
}

void StoryBlock::scanPlayerInput()
{
    while (1)
    {
        cout << endl << "당신의 선택은... ";
        cin >> playerSelect;

        if ((selectCount < playerSelect) || (playerSelect <= 0))
        {
            cout << endl << "잘못된 입력입니다. 옳은 선택지를 입력해주세요.";
            continue;
        }
        break;
    }
    cout << endl;
}