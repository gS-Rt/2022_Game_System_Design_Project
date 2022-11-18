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

    string result1;
    string result2;
    string result3; //�� ������ �������� �� ��� ��ũ��Ʈ

    int statType[3];
    int changeValue[3];
    int playerSelect;
    StoryBlock* nextBlock;
    int selectCount;
    /*
    * ��� Ÿ�Կ� ���� � �ɷ�ġ���� ��ŭ ������ų���� ���ؾ��� �� �մϴ�.
    * �������� ù��°�� ����
    * ��) blockType=2 : 
    */
public:
    StoryBlock();
    StoryBlock(int blockType, string script, string select1, int statType1, int changeValue1, string result1); //��� Ÿ�� ���� �� ��ũ��Ʈ, ������ �Է�, 0�� �Ϲ� ���丮 ��
    StoryBlock(int blockType, string script, string select1, string select2, int statType1, int changeValue1, int statType2, int changeValue2, string result1, string result2);
    StoryBlock(int blockType, string script, string select1, string select2, string select3, int statType1, int changeValue1, int statType2, int changeValue2, int statType3, int changeValue3, string result1, string result2, string result3);
    //�������� ���� ������ �پ�ȭ
    //statType�� �ش� �������� ������ ����, changeValue�� �ش� �������� ������ ��
    //ex) 0, -3 �� �ش� ������ ���� �� hp 3 ����
    //���� ���� ��� ���̸� �������� ����, ���� ���̸� �������� ��Ʈ ���
    /*ex)
    * ����� �濡�� ������ ����� �������ϴ�. �ο���?
    * 1. �ο��
    * 2. ����ô �ϰ� ��������.
    * �Է�:
    * ->1�� ���� ��, hp ����
    * ->2�� ���� ��, 
    */
    void printNormalBlock();
    void scanPlayerInput();

    StoryBlock* getNext() //ť ���� �޼ҵ�
    {
        return this->nextBlock;
    }
    void setNext(StoryBlock* next)
    {
        nextBlock = next;
    }

};