#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <vector>
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

    vector<int> statType1;
    vector<int> changeValue1;
    vector<int> statType2;
    vector<int> changeValue2;
    vector<int> statType3;
    vector<int> changeValue3;

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
    StoryBlock(int blockType, string script, string select1, vector<int> statType1, vector<int> changeValue1, string result1); //��� Ÿ�� ���� �� ��ũ��Ʈ, ������ �Է�, 0�� �Ϲ� ���丮 ��
    //��� Ÿ��, ���丮 ��ũ��Ʈ, ������1, ������1�� �ٲ� ���� ����, ������1�� �ٲ� ������, ������1 ���� ���� ��µ� ��ũ��Ʈ
    StoryBlock(int blockType, string script, string select1, string select2, vector<int> statType1, vector<int> changeValue1, vector<int> statType2, vector<int> changeValue2, string result1, string result2);
    StoryBlock(int blockType, string script, string select1, string select2, string select3, vector<int> statType1, vector<int> changeValue1, vector<int> statType2, vector<int> changeValue2, vector<int> statType3, vector<int> changeValue3, string result1, string result2, string result3);
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
    virtual void storyBlockFunction();

};

/*�ʿ��� ��
* ��ũ��Ʈ
* ������ 1~n
* �������� ���� �޶����� ���� ���� ����, ��ġ
* �������� ���� ���� �� ������ ��� ��ũ��Ʈ
*-> �߻� Ŭ������ ���� ���丮 ��ϸ��� �������̵�
*or �������� ���� �޶����� ���� ���� 2���� �迭, ���� ��ġ 2���� �迭
* 
*/