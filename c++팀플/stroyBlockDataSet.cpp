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
    if(playerSelect==1){
        player.changeStat("hp", -2);
        player.changeStat("wealth",200);}
    else if (playerSelect == 2)
    player.changeStat("penetration", 2);
    else
    player.changeStat("hp",-3);
    player.changeStat("charisma",-2);
    player.changeStat("wealth",300);
}

/* 같은 선택지라도 조건에 따라 다른 결과문 출력 필요 시 함수 오버라이딩으로 printResult() 사용자화 필요
void StoryBlock::printResult()
{

}
*/

//이 아래로 스토리 블록마다 객체 상속받아 계속 생성

void Block1::storyBlockFunction(Player& player)
{
    if(playerSelect==1){
        player.changeStat("hp", -2);
        player.changeStat("wealth",150);
    }
    else if (playerSelect == 2)
    player.changeStat("penetration", 1);
    else
    player.changeStat("charisma", 2);
    player.changeStat("penetration", -1);
}

void Block2::storyBlockFunction(Player& player)
{
    if(playerSelect==1){
        player.changeStat("hp", -3);
        player.changeStat("wealth", 150);
        player.changeStat("information", 1);
    }
    else if (playerSelect == 2){
    player.changeStat("wealth", -100);
    player.changeStat("charisma", 1);
    }
    else
    player.changeStat("hp",-1);
    player.changeStat("penetration",1);
}
void Block3::storyBlockFunction(Player& player)
{
    if(playerSelect==1){
    player.changeStat("hp", -2);
    player.changeStat("power", 1);
    player.changeStat("charisma", -3);
    }
    else if (playerSelect == 2)
    {
    player.changeStat("wealth", -100);
    player.changeStat("information", 1);
    }
    else
    player.changeStat("hp", 1);
}

void Block4::storyBlockFunction(Player& player)
{
    if(playerSelect==1){
        if(player.penetration >= 6){
            player.changeStat("wealth",500);
        if (player.penetration <= 5)
        {
            player.changeStat("hp", -2);
        }
        }
    }
    else if (playerSelect == 2)
    player.changeStat("information", 1);
    else
    player.changeStat("hp", -3);
}
void Block5::storyBlockFunction(Player& player,StoryQueue* queue)
{
    if(playerSelect==1){
    }
    else if (playerSelect == 2){
        queue->inqueue(new Block8);
    }
    else{}
}
void Block6::storyBlockFunction(Player& player,StoryQueue* queue)
{
    if(playerSelect==1){
    }
    else if (playerSelect == 2){
    }
    else{
        queue->inqueue(new Block8);
    }
}
void Block7::storyBlockFunction(Player& player,StoryQueue* queue)
{
    if(playerSelect==1){
    }
    else if (playerSelect == 2){
        queue->inqueue(new Block8);
    }
    else{}
}

void Block9::storyBlockFunction(Player& player)
{
    if(playerSelect==1){
    player.changeStat("hp", -2);
    player.changeStat("power", 1);
    player.changeStat("charisma", -3);
    }
    else if (playerSelect == 2)
    {
    player.changeStat("wealth", -100);
    player.changeStat("information", 1);
    }
    else
    player.changeStat("hp", 1);
}