#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <vector>
#include "player.h"
using namespace std;

class StoryQueue;

class StoryBlock //���丮 ��� Ŭ����
{
protected:
    string script; //���丮 ��ũ��Ʈ
    string select1; //������ 1~3��
    string select2;
    string select3;

    string result1;
    string result2;
    string result3; //�� ������ �������� �� ��� ��ũ��Ʈ

    int playerSelect; //�÷��̾� ������ �Է� ��
    int selectCount; //������ ����, ������ ��� �� �� ����, �÷��̾� �Է°� ���ѿ� ���

    StoryBlock* nextBlock; //��� ť ���ḵũ
public:
    StoryBlock()
    {
        nextBlock = NULL;
        playerSelect = 0;
        selectCount = 0;
    }
    StoryBlock* getNext() //ť ���� �޼ҵ�
    {
        return this->nextBlock;
    }
    void setNext(StoryBlock* next)
    {
        nextBlock = next;
    }

    void printBlock(); //��ũ��Ʈ �� ������ ���
    void scanPlayerInput(); //�� �Է� �޴� �Լ�
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //����� ���� ��ȭ �ڵ� �ۼ��� �����Լ�
    void printResult();

};