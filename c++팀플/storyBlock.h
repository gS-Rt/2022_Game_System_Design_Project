#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

class StoryBlock //스토리 블록 클래스
{
private:
    int blockType; //0:일반 스토리 블록, 1:연계 스토리 블록, 3:메인 스토리 블록
    string script; //스토리 스크립트
    string select1; //선택지 1~3개
    string select2;
    string select3;
    int playerSelect;
    StoryBlock* nextBlock;

public:
    StoryBlock();
    StoryBlock(int blockType, string script, string select1); //블록 타입 지정 후 스크립트, 선택지 입력, 0은 일반 스토리 블럭
    StoryBlock(int blockType, string script, string select1, string select2);
    StoryBlock(int blockType, string script, string select1, string select2, string select3); //선택지에 따라 생성자 다양화
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