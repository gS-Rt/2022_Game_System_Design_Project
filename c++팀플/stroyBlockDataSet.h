#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "storyBlock.h"
#include "player.h"
#include "storyBlolckQueue.h"
using namespace std;

class Block0 :public StoryBlock
{
public:
    Block0()
    {
        script = "block0�׽�Ʈ ������Ʈ. block0�׽�Ʈ ������Ʈ. block0�׽�Ʈ ������Ʈ. block0�׽�Ʈ ������Ʈ."; //��ũ��Ʈ �ʱ�ȭ

        select1 = "1�� ������"; //������ 1
        select2 = "2�� ������"; //������ 2(����)
        select3 = ""; //������ 3(����)

        result1 = "1�� �����"; //������ 1 ���
        result2 = "2�� �����"; //������ 2 ���(����)
        result3 = ""; //������ 3 ���(����)

    }
    virtual void storyBlockFunction(Player& player); //�÷��̾� ��ü ������ �� ���� ����
};
class Block1 :public StoryBlock
{
public:
    Block1()
    {
        script = "block1�׽�Ʈ ������Ʈ�׽�Ʈ ������Ʈ�׽�Ʈ ������Ʈ�׽�Ʈ ������Ʈ�׽�Ʈ ������Ʈ"; //��ũ��Ʈ �ʱ�ȭ

        select1 = "1�� ������"; //������ 1
        select2 = ""; //������ 2(����)
        select3 = ""; //������ 3(����)

        result1 = "1�� �����"; //������ 1 ���
        result2 = ""; //������ 2 ���(����)
        result3 = ""; //������ 3 ���(����)

    }
    virtual void storyBlockFunction(Player& player); //�÷��̾� ��ü ������ �� ���� ����
};
class Block2 :public StoryBlock
{
public:
    Block2()
    {
        script = "block2�׽�Ʈ ������Ʈ�׽�Ʈ ������Ʈ�׽�Ʈ ������Ʈ�׽�Ʈ ������Ʈ�׽�Ʈ ������Ʈ"; //��ũ��Ʈ �ʱ�ȭ

        select1 = "1�� ������"; //������ 1
        select2 = "2�� ������"; //������ 2(����)
        select3 = "3�� ������"; //������ 3(����)

        result1 = "1�� �����"; //������ 1 ���
        result2 = "2�� �����"; //������ 2 ���(����)
        result3 = "3�� ������"; //������ 3 ���(����)

    }
    virtual void storyBlockFunction(Player& player); //�÷��̾� ��ü ������ �� ���� ����
};
class Block3 :public StoryBlock
{
public:
    Block3()
    {
        script = "block3�׽�Ʈ ������Ʈ�׽�Ʈ ������Ʈ�׽�Ʈ ������Ʈ�׽�Ʈ ������Ʈ�׽�Ʈ ������Ʈ�׽�Ʈ ������Ʈ"; //��ũ��Ʈ �ʱ�ȭ

        select1 = "1�� ������"; //������ 1
        select2 = "2�� ������"; //������ 2(����)
        select3 = ""; //������ 3(����)

        result1 = "1�� �����"; //������ 1 ���
        result2 = "2�� �����"; //������ 2 ���(����)
        result3 = ""; //������ 3 ���(����)

    }
    virtual void storyBlockFunction(Player& player); //�÷��̾� ��ü ������ �� ���� ����
};
class Block4 :public StoryBlock
{
public:
    Block4()
    {
        script = "block4�׽�Ʈ ������Ʈ�׽�Ʈ ������Ʈ�׽�Ʈ ������Ʈ�׽�Ʈ ������Ʈ�׽�Ʈ ������Ʈ�׽�Ʈ ������Ʈ�׽�Ʈ ������Ʈ�׽�Ʈ ������Ʈ�׽�Ʈ ������Ʈ"; //��ũ��Ʈ �ʱ�ȭ

        select1 = "1�� ������"; //������ 1
        select2 = "2�� ������"; //������ 2(����)
        select3 = ""; //������ 3(����)

        result1 = "1�� �����"; //������ 1 ���
        result2 = "2�� �����"; //������ 2 ���(����)
        result3 = ""; //������ 3 ���(����)

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};
