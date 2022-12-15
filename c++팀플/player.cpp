#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "player.h"
using namespace std;

Player::Player()
{
    hp = 0;
    power = 0;
    money = 0;
    charisma = 0;
    penetration = 0;
    information = 0;

}
int Player::peekStat(string type) //������ ���� ������ �̸� �Ű��� ������ ��ȯ
{
    if (type == "hp")
        return hp;
    else if (type == "power")
        return power;
    else if (type == "money")
        return money;
    else if (type == "charisma")
        return charisma;
    else if (type == "penetration")
        return penetration;
    else
        return -1;
}
void Player::changeStat(string type, int data) //�ٲ� ���� Ÿ�԰� ������ �� �Է�(���Ϸ��� ������ �Է�)
{
    if (type == "hp")
        hp += data;
    else if (type == "power")
        power += data;
    else if (type == "money")
        money += data;
    else if (type == "charisma")
        charisma += data;
    else if (type == "penetration")
        penetration += data;
    else
        cout << "Ÿ�� �Է� ����";
}