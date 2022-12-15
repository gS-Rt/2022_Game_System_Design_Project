#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

class Player //플레이어 능력치 저장 및 관리
{
private:
    int hp; //체력
    int power; //힘
    int money; //부유함, 돈
    int honor; //카리스마, 교섭력, 언변 능력
    int invade; //잠입, 침투, 위장 능력
    int information; //엔딩 분기를 위한 정보량
    bool isGameOver = false; //게임 끝을 판단할 변수
public:
    Player();
    int peekStat(string type); //참조할 스탯 데이터 이름 매개로 넣으면 반환
    void changeStat(string type, int data); //바꿀 스탯 타입과 변경할 값 입력(줄일려면 음수값 입력)
    void GameOver() { isGameOver = true; }
    bool getGameOver() { return isGameOver;  }
};
