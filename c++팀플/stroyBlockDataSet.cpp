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

/* 같은 선택지라도 조건에 따라 다른 결과문 출력 필요 시 함수 오버라이딩으로 printResult() 사용자화 필요
void StoryBlock::printResult()
{

}
*/

//이 아래로 스토리 블록마다 객체 상속받아 계속 생성

void Block0::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -2);
        player.changeStat("money",200);
    }
    else if (playerSelect == 2) {
        player.changeStat("invade", 2);
    }
    else {
        player.changeStat("hp",-3);
        player.changeStat("honor",-2);
        player.changeStat("money",300);
    }
}

void Block1::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -2);
        player.changeStat("money",200);
    }
    else if (playerSelect == 2) {
        player.changeStat("invade", 2);
    }
    else {
        player.changeStat("hp",-3);
        player.changeStat("honor",-2);
        player.changeStat("money",300);
    }
}

void Block2::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -2);
        player.changeStat("money",200);
    }
    else if (playerSelect == 2) {
        player.changeStat("invade", 2);
    }
    else {
        player.changeStat("hp",-3);
        player.changeStat("honor",-2);
        player.changeStat("money",300);
    }
}

void Block3::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -2);
        player.changeStat("money",200);
    }
    else if (playerSelect == 2) {
        player.changeStat("invade", 2);
    }
    else {
        player.changeStat("hp",-3);
        player.changeStat("honor",-2);
        player.changeStat("money",300);
    }
}

void Block4::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -2);
        player.changeStat("money",200);
    }
    else if (playerSelect == 2) {
        player.changeStat("invade", 2);
    }
    else {
        player.changeStat("hp",-3);
        player.changeStat("honor",-2);
        player.changeStat("money",300);
    }
}

void Block5::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -2);
        player.changeStat("money",200);
    }
    else if (playerSelect == 2) {
        player.changeStat("invade", 2);
    }
    else {
        player.changeStat("hp",-3);
        player.changeStat("honor",-2);
        player.changeStat("money",300);
    }
}

void Block6::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -2);
        player.changeStat("money",200);
    }
    else if (playerSelect == 2) {
        player.changeStat("invade", 2);
    }
    else {
        player.changeStat("hp",-3);
        player.changeStat("honor",-2);
        player.changeStat("money",300);
    }
}

void Block7::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -2);
        player.changeStat("money",200);
    }
    else if (playerSelect == 2) {
        player.changeStat("invade", 2);
    }
    else {
        player.changeStat("hp",-3);
        player.changeStat("honor",-2);
        player.changeStat("money",300);
    }
}

void Block8::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -2);
        player.changeStat("money",200);
    }
    else if (playerSelect == 2) {
        player.changeStat("invade", 2);
    }
    else {
        player.changeStat("hp",-3);
        player.changeStat("honor",-2);
        player.changeStat("money",300);
    }
}

void Block9::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -2);
        player.changeStat("money",200);
    }
    else if (playerSelect == 2) {
        player.changeStat("invade", 2);
    }
    else {
        player.changeStat("hp",-3);
        player.changeStat("honor",-2);
        player.changeStat("money",300);
    }
}

void Block10::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -2);
        player.changeStat("money",200);
    }
    else if (playerSelect == 2) {
        player.changeStat("invade", 2);
    }
    else {
        player.changeStat("hp",-3);
        player.changeStat("honor",-2);
        player.changeStat("money",300);
    }
}

void Block11::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -2);
        player.changeStat("money",200);
    }
    else if (playerSelect == 2) {
        player.changeStat("invade", 2);
    }
    else {
        player.changeStat("hp",-3);
        player.changeStat("honor",-2);
        player.changeStat("money",300);
    }
}

void Block12::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -2);
        player.changeStat("money",200);
    }
    else if (playerSelect == 2) {
        player.changeStat("invade", 2);
    }
    else {
        player.changeStat("hp",-3);
        player.changeStat("honor",-2);
        player.changeStat("money",300);
    }
}

void Block13::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -2);
        player.changeStat("money",200);
    }
    else if (playerSelect == 2) {
        player.changeStat("invade", 2);
    }
    else {
        player.changeStat("hp",-3);
        player.changeStat("honor",-2);
        player.changeStat("money",300);
    }
}

void Block14::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -2);
        player.changeStat("money",200);
    }
    else if (playerSelect == 2) {
        player.changeStat("invade", 2);
    }
    else {
        player.changeStat("hp",-3);
        player.changeStat("honor",-2);
        player.changeStat("money",300);
    }
}

void Block15::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -2);
        player.changeStat("money",200);
    }
    else if (playerSelect == 2) {
        player.changeStat("invade", 2);
    }
    else {
        player.changeStat("hp",-3);
        player.changeStat("honor",-2);
        player.changeStat("money",300);
    }
}

void BlockChoiceStat::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -2);
        player.changeStat("money",200);
    }
    else if (playerSelect == 2) {
        player.changeStat("invade", 2);
    }
    else {
        player.changeStat("hp",-3);
        player.changeStat("honor",-2);
        player.changeStat("money",300);
    }
}

void BlockMainStory::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -2);
        player.changeStat("money",200);
    }
    else if (playerSelect == 2) {
        player.changeStat("invade", 2);
    }
    else {
        player.changeStat("hp",-3);
        player.changeStat("honor",-2);
        player.changeStat("money",300);
    }
}

void BlockMainStoryCastle::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -2);
        player.changeStat("money",200);
    }
    else if (playerSelect == 2) {
        player.changeStat("invade", 2);
    }
    else {
        player.changeStat("hp",-3);
        player.changeStat("honor",-2);
        player.changeStat("money",300);
    }
}
