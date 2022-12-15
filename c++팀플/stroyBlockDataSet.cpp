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
        if (player.peekStat("invade") >= 1) {
            cout << "������ ���Կ� ������ ��ġ�µ� �����ߴ�.�� ���� ���� ���� �� ���� �� ����.";
            player.changeStat("money", 500);
        }
        else {
            cout << "�����鿡�� �ɷ� ��� �ε�� �¾Ҵ�...";
            player.changeStat("hp", -1);
        }
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
        player.changeStat("money", 500);
    }
}

void BlockMainStory::storyBlockFunction(Player& player, StoryQueue* queue) //�� ��Ʈ�� �Ͻ��� ��Ʈ�� ����
{
    if(playerSelect==1) {
        queue->inqueue(new BlockMainStoryCastle());
    }
    else if (playerSelect == 2) {
        queue->inqueue(new BlockMainStoryMarket());
    }
}

void BlockMainStoryCastle::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        queue->inqueue(new BlockMainStoryCastleDoor());
    }
    else if (playerSelect == 2) {
        queue->inqueue(new BlockMainStoryCastleHole());
    }
}

void BlockStoryStart::storyBlockFunction(Player& player, StoryQueue* queue) {

}

void BlockMainStoryCastleDoor::storyBlockFunction(Player& player, StoryQueue* queue) { //��  ��Ʈ���� ��, ��, ����, ���� ������ ���� �ʿ�
    if (player.peekStat("honor") >= 3)
        cout << "���� ������ ����� �ȳ��� ���� �������� �̵��ߴ�.\n";
    else {
        if (player.peekStat("power") >= 3) {
            cout << "����� �����ϰ� ����ġ�� ���� ����.\n";
        }
        else {
            cout << "����� �հ� ���� ����. �� ���� �λ��� �Ծ���.\n";
            player.changeStat("hp", -2);
        }
    }
    
    queue->inqueue(new BlockMainStoryFinal());
}

void BlockMainStoryCastleHole::storyBlockFunction(Player& player, StoryQueue* queue) {
    if (player.peekStat("invade") >= 3) {
        cout << "���ɽ��� ���ȿ� �����ߴ�. ������ ��Ű�� �ʾҴ�.\n";
    }
    else {
        cout << "��񺴿��� �ɷ� �λ��� �Ծ�����, �����µ��� �����ߴ�.\n";
        player.changeStat("hp", -1);
    }

    queue->inqueue(new BlockMainStoryFinal());
}

void BlockMainStoryMarket::storyBlockFunction(Player& player, StoryQueue* queue) { //�Ͻ��� ��Ʈ���� ���� ���� �߿�
    cout << "����� ��� ���� �о� ������ �����ߴ�.";
    bool isReal = false;
    int money = player.peekStat("money");
    srand((unsigned int)time(NULL));
    int ran = rand() % 10;
    player.changeStat("money", -money);
    for (int i = 0; i < (money / 500) + 1; i++) {
        if (ran == 0 || ran == 1) {
            isReal = true;
        }
    }

    if (isReal) {
        queue->inqueue(new BlockEndingVictory());
    }
    else {
        queue->inqueue(new BlockEndingDefeat());

    }
}

void BlockMainStoryFinal::storyBlockFunction(Player& player, StoryQueue* queue) {
    if (player.peekStat("information") >= 3) {
        queue->inqueue(new BlockEndingVictory());
    }
    else {
        queue->inqueue(new BlockEndingDefeat());
    }
}

void BlockEndingVictory::storyBlockFunction(Player& player, StoryQueue* queue) {
    player.GameOver();
}

void BlockEndingDefeat::storyBlockFunction(Player& player, StoryQueue* queue) {
    player.GameOver();
}

void BlockEndingDie::storyBlockFunction(Player& player, StoryQueue* queue) {
    player.GameOver();
}

void BlockParent::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if (playerSelect == 1) {
        player.changeStat("money", 500);
    }
    else if (playerSelect == 2) {
        player.changeStat("hp", 1);
        player.changeStat("power", 1);
        player.changeStat("invade", 1);
    }
    else {
        player.changeStat("honor", 1);
        player.changeStat("information", 1);
    }
}