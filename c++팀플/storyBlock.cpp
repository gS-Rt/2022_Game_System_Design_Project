#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "storyBlock.h"
#include "storyBlolckQueue.h"
using namespace std;

void StoryBlock::printBlock() //스크립트와 선택지 출력
{
    selectCount = 0;
    cout << endl << script << endl << endl;
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

void StoryBlock::scanPlayerInput() //선택 입력
{
    while (1)
    {
        if (selectCount == 0) {
            break;
        }

        cout << endl << "당신의 선택은 ...";
        cin >> playerSelect;

        if ((selectCount < playerSelect) || (playerSelect <= 0))
        {
            cout << endl << "잘못된 입력입니다. 옳은 선택지를 입력해주세요."; //정수 아닐때도 
            continue;
        }
        break;
    }
    cout << endl;
}

void StoryBlock::printResult() //결과문 출력, 오버라이딩으로 조건에 따라 변경 가능
{
    if (playerSelect == 1)
    {
        if(!result1.empty())
            cout << endl << result1 << endl;
    }
    else if (playerSelect == 2)
    {
        if (!result2.empty())
            cout << endl << result2 << endl;
    }
    else
    {
        if (!result3.empty())
            cout << endl << result3 << endl;
    }

    cout << endl;
    Sleep(1000);
    system("pause");
}

void StoryBlock::storyBlockFunction(Player& player, StoryQueue* queue)
{
    return;
}
