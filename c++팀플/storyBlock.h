#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

class StoryBlock //���丮 ��� Ŭ����
{
private:
    int blockType; //0:�Ϲ� ���丮 ���, 1:���� ���丮 ���, 3:���� ���丮 ���
    string script; //���丮 ��ũ��Ʈ
    string select1; //������ 1~3��
    string select2;
    string select3;
    int playerSelect;
    StoryBlock* nextBlock;

public:
    StoryBlock();
    StoryBlock(int blockType, string script, string select1); //��� Ÿ�� ���� �� ��ũ��Ʈ, ������ �Է�, 0�� �Ϲ� ���丮 ��
    StoryBlock(int blockType, string script, string select1, string select2);
    StoryBlock(int blockType, string script, string select1, string select2, string select3); //�������� ���� ������ �پ�ȭ
    void printNormalBlock();
    void scanPlayerInput();
    StoryBlock* getNext()
    {
        return this->nextBlock;
    }
    void setNext(StoryBlock* next)
    {
        nextBlock = next;
    }

};