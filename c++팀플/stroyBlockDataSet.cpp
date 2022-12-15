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


void Block0::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -2);
        player.changeStat("money",200);
    }
    else if (playerSelect == 2)
        player.changeStat("invade", 2);
    else {
        player.changeStat("hp",-3);
        player.changeStat("honor",-2);
        player.changeStat("money",300);
    }
}

/* 같은 선택지라도 조건에 따라 다른 결과문 출력 필요 시 함수 오버라이딩으로 printResult() 사용자화 필요
void StoryBlock::printResult()
{

}
*/

//이 아래로 스토리 블록마다 객체 상속받아 계속 생성

void Block1::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1){
        player.changeStat("hp", -2);
        player.changeStat("money",150);
    }
    else if (playerSelect == 2)
        player.changeStat("invade", 1);
    else {
        player.changeStat("honor", 2);
        player.changeStat("invade", -1);
    }
}

void Block2::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1){
        player.changeStat("hp", -3);
        player.changeStat("money", 150);
        player.changeStat("information", 1);
    }
    else if (playerSelect == 2) {
        player.changeStat("money", -100);
        player.changeStat("honor", 1);
    }
    else {
        player.changeStat("hp",-1);
        player.changeStat("invade",1);
    }
}
void Block3::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1){
        player.changeStat("hp", -2);
        player.changeStat("power", 1);
        player.changeStat("honor", -3);
    }
    else if (playerSelect == 2)
    {
        player.changeStat("money", -100);
        player.changeStat("information", 1);
    }
    else
        player.changeStat("hp", 1);
}

void Block4::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1){
        if(player.peekStat("invade") >= 6) {
            player.changeStat("money",500);
            if (player.peekStat("invade") <= 5)
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

void Block8::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1){
    player.changeStat("money", 300);
    }
    else if (playerSelect == 2)
    {
    player.changeStat("money", 100);
    }
    else
    player.changeStat("hp", -1);
    player.changeStat("invade", 1);
}


void Block9::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1){
        player.changeStat("invade", 1);
    }
    else if (playerSelect == 2)
    {
        player.changeStat("hp", 3);
        player.changeStat("power", 2); 
    }
    else {
        player.changeStat("honor", 2);
        player.changeStat("invade", 2);
    }
}

void Block10::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1){
        player.changeStat("hp", -4);
    }
    else if (playerSelect == 2)
    {
        player.changeStat("money", -100);
    }
    else
        player.changeStat("information", 2);
}

void Block11::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1){
        player.changeStat("honor", 2);
    }
    else if (playerSelect == 2)
    {
        player.changeStat("money", 300);
    }
    else
        player.changeStat("information", 2);
}
