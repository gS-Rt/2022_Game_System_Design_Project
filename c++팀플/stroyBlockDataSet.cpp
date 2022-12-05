#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "storyBlock.h"
#include "player.h"
#include "stroyBlockDataSet.h"
#include "storyBlolckQueue.h"
using namespace std;


void Block0::storyBlockFunction(Player& player)
{
	//여러 값 변경 코드 작성
    player.changeStat("hp", 10); //hp 10증가 코드 예시
    cout << "디버깅용 hp 출력: " << player.peekStat("hp");
}

/* 같은 선택지라도 조건에 따라 다른 결과문 출력 필요 시 함수 오버라이딩으로 printResult() 사용자화 필요
void StoryBlock::printResult()
{

}
*/

//이 아래로 스토리 블록마다 객체 상속받아 계속 생성

void Block1::storyBlockFunction(Player& player)
{
    //여러 값 변경 코드 작성
    player.changeStat("hp", 10); //hp 10증가 코드 예시

    //queue.dequeue();
    cout << "디버깅용 hp 출력: " << player.peekStat("hp");
}

void Block2::storyBlockFunction(Player& player)
{
    //여러 값 변경 코드 작성
    player.changeStat("hp", 10); //hp 10증가 코드 예시
    cout << "디버깅용 hp 출력: " << player.peekStat("hp");
}

void Block3::storyBlockFunction(Player& player)
{
    //여러 값 변경 코드 작성
    player.changeStat("hp", 10); //hp 10증가 코드 예시
    cout << "디버깅용 hp 출력: " << player.peekStat("hp");
}

void Block4::storyBlockFunction(Player& player, StoryQueue* queue) //인자로 queue 추가 시 해당 큐에 원하는 블록 삽입 가능
{
    //여러 값 변경 코드 작성
    player.changeStat("hp", 10); //hp 10증가 코드 예시
    queue->inqueue(new Block0());
    queue->inqueue(new Block0());
    queue->inqueue(new Block0());
    cout << "디버깅용 hp 출력: " << player.peekStat("hp");
}