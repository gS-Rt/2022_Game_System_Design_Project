#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

class Player //�÷��̾� �ɷ�ġ ���� �� ����
{
private:
    int hp; //ü��
    int power; //��
    int wealth; //������, ��
    int charisma; //ī������, ������, �� �ɷ�
    int penetration; //����, ħ��, ���� �ɷ�
public:
    Player();
    int peekStat(string type); //������ ���� ������ �̸� �Ű��� ������ ��ȯ
    void changeStat(string type, int data); //�ٲ� ���� Ÿ�԰� ������ �� �Է�(���Ϸ��� ������ �Է�)
};