#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "storyBlock.h"
#include "player.h"
#include "stroyBlockDataSet.h"
#include "storyBlolckQueue.h"
using namespace std;


void Block0::storyBlockFunction(Player& player)
{
	//���� �� ���� �ڵ� �ۼ�
    player.changeStat("hp", 10); //hp 10���� �ڵ� ����
    cout << "������ hp ���: " << player.peekStat("hp");
}

/* ���� �������� ���ǿ� ���� �ٸ� ����� ��� �ʿ� �� �Լ� �������̵����� printResult() �����ȭ �ʿ�
void StoryBlock::printResult()
{

}
*/

//�� �Ʒ��� ���丮 ��ϸ��� ��ü ��ӹ޾� ��� ����

void Block1::storyBlockFunction(Player& player)
{
    //���� �� ���� �ڵ� �ۼ�
    player.changeStat("hp", 10); //hp 10���� �ڵ� ����

    //queue.dequeue();
    cout << "������ hp ���: " << player.peekStat("hp");
}

void Block2::storyBlockFunction(Player& player)
{
    //���� �� ���� �ڵ� �ۼ�
    player.changeStat("hp", 10); //hp 10���� �ڵ� ����
    cout << "������ hp ���: " << player.peekStat("hp");
}

void Block3::storyBlockFunction(Player& player)
{
    //���� �� ���� �ڵ� �ۼ�
    player.changeStat("hp", 10); //hp 10���� �ڵ� ����
    cout << "������ hp ���: " << player.peekStat("hp");
}

void Block4::storyBlockFunction(Player& player, StoryQueue* queue) //���ڷ� queue �߰� �� �ش� ť�� ���ϴ� ��� ���� ����
{
    //���� �� ���� �ڵ� �ۼ�
    player.changeStat("hp", 10); //hp 10���� �ڵ� ����
    queue->inqueue(new Block0());
    queue->inqueue(new Block0());
    queue->inqueue(new Block0());
    cout << "������ hp ���: " << player.peekStat("hp");
}