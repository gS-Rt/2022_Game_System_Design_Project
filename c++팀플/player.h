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
    int money; //������, ��
    int honor; //ī������, ������, �� �ɷ�
    int invade; //����, ħ��, ���� �ɷ�
    int information; //���� �б⸦ ���� ������
    bool isGameOver = false; //���� ���� �Ǵ��� ����
public:
    Player();
    int peekStat(string type); //������ ���� ������ �̸� �Ű��� ������ ��ȯ
    void changeStat(string type, int data); //�ٲ� ���� Ÿ�԰� ������ �� �Է�(���Ϸ��� ������ �Է�)
    void GameOver() { isGameOver = true; }
    bool getGameOver() { return isGameOver;  }
};
