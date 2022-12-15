#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "storyBlock.h"
#include "player.h"
#include "stroyBlockDataSet.h"
#include "storyBlolckQueue.h"
using namespace std;

/* ���� �������� ���ǿ� ���� �ٸ� ����� ��� �ʿ� �� �Լ� �������̵����� printResult() �����ȭ �ʿ�
void StoryBlock::printResult()
{

}
*/

//�� �Ʒ��� ���丮 ��ϸ��� ��ü ��ӹ޾� ��� ����

void Block0::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("money", 100);
    }
    else if (playerSelect == 2) {
        player.changeStat("invade", 1);
    }
    else {
        player.changeStat("hp", -2);
        player.changeStat("honor", -1);
        player.changeStat("money", 300);
    }
}

void Block1::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("invade", 1);
    }
    else if (playerSelect == 2) {
        player.changeStat("honor", 1);
    }
    else {
        player.changeStat("hp", -1);
        player.changeStat("money", 100);
    }
}

void Block2::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -1);
        player.changeStat("money", 100);
        player.changeStat("information", 1);
    }
    else if (playerSelect == 2) {
        if (player.peekStat("money") >= 200) {
            cout << "���� ���Ұ��!";
            player.changeStat("money", -200);
        }
        else {
            cout << "���� ������ ���ݹ޾Ҵ�!";
            player.changeStat("hp", -1);
        }
    }
    else {
        player.changeStat("hp",-1);
        player.changeStat("invade", 1);
    }
}

void Block3::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", 2);
        player.changeStat("power", 1);
        player.changeStat("invade", -1);
    }
    else if (playerSelect == 2) {
        if(player.peekStat("money") >= 100) {
            player.changeStat("money", -100);
            cout << "���� ������ ����� ��带 ���. �״� ���縦 ǥ�ϸ� �ڽ��� �ִ� ����� ���ʱ����� ���� �˷��ָ�, �����϶� �������־���.";
            player.changeStat("information", 1);
        }
        else {
            cout << "�ǳ��� ���� �����ϴ�...";
        }
    }
    else {
    }
}

void Block4::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
    }
    else if (playerSelect == 2) {
        player.changeStat("information", 1);
    }
    else {
        player.changeStat("hp", -2);
        player.changeStat("honor", 2);
    }
}

void Block5::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if (playerSelect == 2) {
        queue->inqueue(new Block8());
    }
    return;
}

void Block6::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if (playerSelect == 3) {
        queue->inqueue(new Block8());
    }
    return;
}

void Block7::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if (playerSelect == 2) {
        queue->inqueue(new Block8());
    }
    return;
}

void Block8::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("money", 300);
    }
    else if (playerSelect == 2) {
        player.changeStat("hp", 3);
        player.changeStat("power", 2);
    }
    else {
        player.changeStat("information", 2);
    }
}

void Block9::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("invade", 1);
    }
    else if (playerSelect == 2) {
        player.changeStat("money", 200);
    }
    else {
        player.changeStat("hp", -1);
        player.changeStat("invade", 1);
    }
}

void Block10::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -2);
    }
    else if (playerSelect == 2) {
        player.changeStat("money", 300);
    }
    else {
        player.changeStat("information", 2);
    }
}

void Block11::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("invade", 1);
    }
    else if (playerSelect == 2) {
        player.changeStat("money", 300);
    }
    else {
        player.changeStat("information", 1);
    }
}

void Block12::storyBlockFunction(Player& player, StoryQueue* queue)
{
    srand((unsigned int)time(NULL));
    int ran = rand() % 2;
    if(playerSelect==1) {
        if(player.peekStat("money") >= 100) {
            player.changeStat("money", -100);
            if(ran == 0) {
                cout << "���� ������ �����ִ� ��������̴�. ������ �þ��.";
                player.changeStat("information", 1);
            }
            else {
                cout << "��մ� ��ȭå�̴�. ����� ��������.";
            }
        }
        else {
            cout << "���� �����ϴ�...";
        }
    }
    else if (playerSelect == 2) {
        player.changeStat("money", -100);
        if(player.peekStat("money") >= 100) {
            if(ran == 0) {
                 cout << "��û�� ���� ��������. ��ü �ɷ��� ���� �� ����..";
                 player.changeStat("power", 1);
            }
            else {
                 cout << "���ִ� �ֽ��� �� ����. Ư���� ȿ���� ���� �� ����.";
            }
        }
        else {
            cout << "���� �����ϴ�...";
        }
    }
}


void Block13::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("power", 1);
        player.changeStat("honor", -1);
    }
    else if (playerSelect == 2) {
        player.changeStat("information", 1);
        player.changeStat("honor", -1);
    }
    else {
        player.changeStat("honor", 3);
    }
}

void Block14::storyBlockFunction(Player& player, StoryQueue* queue)
{
    srand((unsigned int)time(NULL));
    int ran = rand() % 2;
    if(playerSelect==1) {
        if(ran == 0) {
            cout << "�̹��� ����ߴ�! ���ظ� �Ծ���.";
            player.changeStat("hp", -1);
        }
        else {
            cout << "��尡 ����־���! �ε��ϰ� ì���.";
            player.changeStat("money", 300);
        }
    }
}

void Block15::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        if(player.peekStat("money") >= 100) {
            player.changeStat("money", -100);
            player.changeStat("hp", 2);
            player.changeStat("power", 1);
            player.changeStat("invade", 1);
        }
        else {
            cout << "������ ���� ���� ����...";
        }
    }
    else if (playerSelect == 2) {
        if(player.peekStat("money") >= 100) {
            player.changeStat("money", -100);
            player.changeStat("information", 1);
            player.changeStat("honor", 1);
        }
        else {
            cout << "������ ���� ���� ����...";
        }
    }
    else {
        player.changeStat("money", 300);
    }
}

void BlockChoiceStat::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("honor", 1);
        player.changeStat("information", 1);
    }
    else if (playerSelect == 2) {
        player.changeStat("hp", 2);
        player.changeStat("power", 1);
        player.changeStat("invade", 1);
    }
    else {
        player.changeStat("money", 1000);
    }
}

void BlockMainStory::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
    }
    else if (playerSelect == 2) {
    }
}

void BlockMainStoryCastle::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
    }
    else if (playerSelect == 2) {
    }
}

void BlockStoryStart::storyBlockFunction(Player& player, StoryQueue* queue) {

}
