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
    hp = 3;
    power = 0;
    money = 200;
    honor = 0;
    invade = 0;
    information = 0;
}
int Player::peekStat(string type) //참조할 스탯 데이터 이름 매개로 넣으면 반환
{
    if (type == "hp")
        return hp;
    else if (type == "power")
        return power;
    else if (type == "money")
        return money;
    else if (type == "honor")
        return honor;
    else if (type == "invade")
        return invade;
    else if (type == "information")
        return information;
    else
        return -1;
}
void Player::changeStat(string type, int data) //바꿀 스탯 타입과 변경할 값 입력(줄일려면 음수값 입력)
{
    if (type == "hp")
        hp += data;
    else if (type == "power")
        power += data;
    else if (type == "money")
        money += data;
    else if (type == "honor")
        honor += data;
    else if (type == "invade")
        invade += data;
    else if (type == "information")
        information += data;
    else
        cout << "타입 입력 오류";
}
