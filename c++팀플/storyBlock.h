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

    string result1;
    string result2;
    string result3; //각 선택지 선택했을 때 결과 스크립트

    int statType[3];
    int changeValue[3];
    int playerSelect;
    StoryBlock* nextBlock;
    int selectCount;
    /*
    * 블록 타입에 따라 어떤 능력치들을 얼만큼 증감시킬껀지 정해야할 듯 합니다.
    * 선택지도 첫번째는 증가
    * 예) blockType=2 : 
    */
public:
    StoryBlock();
    StoryBlock(int blockType, string script, string select1, int statType1, int changeValue1, string result1); //블록 타입 지정 후 스크립트, 선택지 입력, 0은 일반 스토리 블럭
    StoryBlock(int blockType, string script, string select1, string select2, int statType1, int changeValue1, int statType2, int changeValue2, string result1, string result2);
    StoryBlock(int blockType, string script, string select1, string select2, string select3, int statType1, int changeValue1, int statType2, int changeValue2, int statType3, int changeValue3, string result1, string result2, string result3);
    //선택지에 따라 생성자 다양화
    //statType는 해당 선택지가 변경할 스탯, changeValue는 해당 선택지가 변경할 양
    //ex) 0, -3 은 해당 선택지 선택 시 hp 3 감소
    //선택 이후 양수 값이면 긍정적인 말을, 음수 값이면 부정적인 멘트 출력
    /*ex)
    * 당신은 길에서 포악한 고블린을 만났습니다. 싸울까요?
    * 1. 싸운다
    * 2. 못본척 하고 지나간다.
    * 입력:
    * ->1번 선택 시, hp 감소
    * ->2번 선택 시, 
    */
    void printNormalBlock();
    void scanPlayerInput();

    StoryBlock* getNext() //큐 관련 메소드
    {
        return this->nextBlock;
    }
    void setNext(StoryBlock* next)
    {
        nextBlock = next;
    }

};