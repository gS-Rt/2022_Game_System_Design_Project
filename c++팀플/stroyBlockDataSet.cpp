#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>
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
        player.changeStat("money", 100);
    }
    else if (playerSelect == 2) {
        player.changeStat("invade", 1);
    }
    else {
        player.changeStat("hp", -2);
        player.changeStat("honor", -1);
        player.changeStat("money", 300);
    }
}

void Block1::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("invade", 1);
    }
    else if (playerSelect == 2) {
        player.changeStat("honor", 1);
    }
    else {
        player.changeStat("hp", -1);
        player.changeStat("money", 100);
    }
}

void Block2::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -1);
        player.changeStat("money", 100);
        player.changeStat("information", 1);
    }
    else if (playerSelect == 2) {
        if (player.peekStat("money") >= 200) {
            cout << "돈을 빼았겼다!";
            player.changeStat("money", -200);
        }
        else {
            cout << "돈이 부족해 공격받았다!";
            player.changeStat("hp", -1);
        }
    }
    else {
        player.changeStat("hp",-1);
        player.changeStat("invade", 1);
    }
}

void Block3::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", 2);
        player.changeStat("power", 1);
        player.changeStat("invade", -1);
    }
    else if (playerSelect == 2) {
        if(player.peekStat("money") >= 100) {
            player.changeStat("money", -100);
            cout << "그의 여정을 도우려 골드를 줬다. 그는 감사를 표하며 자신이 있던 군대와 전초기지에 대해 알려주며, 조심하라 조언해주었다.";
            player.changeStat("information", 1);
        }
        else {
            cout << "건네줄 돈이 부족하다...";
        }
    }
    else {
    }
}

void Block4::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        if (player.peekStat("invade") >= 1) {
            cout << "무사히 잠입에 성공해 훔치는데 성공했다.꽤 많은 돈을 얻을 수 있을 것 같다.";
            player.changeStat("money", 500);
        }
        else {
            cout << "도적들에게 걸려 흠씬 두들겨 맞았다...";
            player.changeStat("hp", -1);
        }
    }
    else if (playerSelect == 2) {
        player.changeStat("information", 1);
    }
    else {
        player.changeStat("hp", -2);
        player.changeStat("honor", 2);
    }
}

void Block5::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if (playerSelect == 2) {
        queue->inqueue(new Block8());
    }
    return;
}

void Block6::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if (playerSelect == 3) {
        queue->inqueue(new Block8());
    }
    return;
}

void Block7::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if (playerSelect == 2) {
        queue->inqueue(new Block8());
    }
    return;
}

void Block8::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("money", 300);
    }
    else if (playerSelect == 2) {
        player.changeStat("hp", 3);
        player.changeStat("power", 2);
    }
    else {
        player.changeStat("information", 2);
    }
}

void Block9::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("invade", 1);
    }
    else if (playerSelect == 2) {
        player.changeStat("money", 200);
    }
    else {
        player.changeStat("hp", -1);
        player.changeStat("invade", 1);
    }
}

void Block10::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("hp", -2);
    }
    else if (playerSelect == 2) {
        player.changeStat("money", 300);
    }
    else {
        player.changeStat("information", 2);
    }
}

void Block11::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("invade", 1);
    }
    else if (playerSelect == 2) {
        player.changeStat("money", 300);
    }
    else {
        player.changeStat("information", 1);
    }
}

void Block12::storyBlockFunction(Player& player, StoryQueue* queue)
{
    srand((unsigned int)time(NULL));
    int ran = rand() % 2;
    if(playerSelect==1) {
        if(player.peekStat("money") >= 100) {
            player.changeStat("money", -100);
            if(ran == 0) {
                cout << "많은 지식이 적혀있는 백과사전이다. 지식이 늘어났다.";
                player.changeStat("information", 1);
            }
            else {
                cout << "재밌는 만화책이다. 기분이 좋아졌다.";
            }
        }
        else {
            cout << "돈이 부족하다...";
        }
    }
    else if (playerSelect == 2) {
        player.changeStat("money", -100);
        if(player.peekStat("money") >= 100) {
            if(ran == 0) {
                 cout << "엄청난 힘이 느껴진다. 신체 능력이 향상된 것 같다..";
                 player.changeStat("power", 1);
            }
            else {
                 cout << "맛있는 주스인 것 같다. 특별한 효과는 없는 것 같다.";
            }
        }
        else {
            cout << "돈이 부족하다...";
        }
    }
}


void Block13::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("power", 1);
        player.changeStat("honor", -1);
    }
    else if (playerSelect == 2) {
        player.changeStat("information", 1);
        player.changeStat("honor", -1);
    }
    else {
        player.changeStat("honor", 3);
    }
}

void Block14::storyBlockFunction(Player& player, StoryQueue* queue)
{
    srand((unsigned int)time(NULL));
    int ran = rand() % 2;
    if(playerSelect==1) {
        if(ran == 0) {
            cout << "미믹이 기습했다! 피해를 입었다.";
            player.changeStat("hp", -1);
        }
        else {
            cout << "골드가 들어있었다! 두둑하게 챙겼다.";
            player.changeStat("money", 300);
        }
    }
}

void Block15::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        if(player.peekStat("money") >= 100) {
            player.changeStat("money", -100);
            player.changeStat("hp", 2);
            player.changeStat("power", 1);
            player.changeStat("invade", 1);
        }
        else {
            cout << "연못에 던질 돈이 없다...";
        }
    }
    else if (playerSelect == 2) {
        if(player.peekStat("money") >= 100) {
            player.changeStat("money", -100);
            player.changeStat("information", 1);
            player.changeStat("honor", 1);
        }
        else {
            cout << "연못에 던질 돈이 없다...";
        }
    }
    else {
        player.changeStat("money", 300);
    }
}

void BlockChoiceStat::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        player.changeStat("honor", 1);
        player.changeStat("information", 1);
    }
    else if (playerSelect == 2) {
        player.changeStat("hp", 2);
        player.changeStat("power", 1);
        player.changeStat("invade", 1);
    }
    else {
        player.changeStat("money", 500);
    }
}

void BlockMainStory::storyBlockFunction(Player& player, StoryQueue* queue) //성 루트와 암시장 루트로 갈림
{
    if(playerSelect==1) {
        queue->inqueue(new BlockMainStoryCastle());
    }
    else if (playerSelect == 2) {
        queue->inqueue(new BlockMainStoryMarket());
    }
}

void BlockMainStoryCastle::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if(playerSelect==1) {
        queue->inqueue(new BlockMainStoryCastleDoor());
    }
    else if (playerSelect == 2) {
        queue->inqueue(new BlockMainStoryCastleHole());
    }
}

void BlockStoryStart::storyBlockFunction(Player& player, StoryQueue* queue) {

}

void BlockMainStoryCastleDoor::storyBlockFunction(Player& player, StoryQueue* queue) { //성  루트에선 명성, 힘, 잠입, 정보 스탯이 골고루 필요
    if (player.peekStat("honor") >= 3)
        cout << "높은 명성덕에 경비병의 안내를 따라 성안으로 이동했다.\n";
    else {
        if (player.peekStat("power") >= 3) {
            cout << "경비병을 가뿐하게 물리치고 성에 들어갔다.\n";
        }
        else {
            cout << "경비병을 뚫고 성에 들어갔다. 꽤 심한 부상을 입었다.\n";
            player.changeStat("hp", -2);
        }
    }
    
    queue->inqueue(new BlockMainStoryFinal());
}

void BlockMainStoryCastleHole::storyBlockFunction(Player& player, StoryQueue* queue) {
    if (player.peekStat("invade") >= 3) {
        cout << "조심스레 성안에 잠입했다. 다행히 들키지 않았다.\n";
    }
    else {
        cout << "경비병에게 걸려 부상을 입었지만, 들어오는데엔 성공했다.\n";
        player.changeStat("hp", -1);
    }

    queue->inqueue(new BlockMainStoryFinal());
}

void BlockMainStoryMarket::storyBlockFunction(Player& player, StoryQueue* queue) { //암시장 루트에선 돈과 운이 중요
    cout << "당신의 모든 돈을 털어 정보를 구매했다.";
    bool isReal = false;
    int money = player.peekStat("money");
    srand((unsigned int)time(NULL));
    int ran = rand() % 10;
    player.changeStat("money", -money);
    for (int i = 0; i < (money / 500) + 1; i++) {
        if (ran == 0 || ran == 1) {
            isReal = true;
        }
    }

    if (isReal) {
        queue->inqueue(new BlockEndingVictory());
    }
    else {
        queue->inqueue(new BlockEndingDefeat());

    }
}

void BlockMainStoryFinal::storyBlockFunction(Player& player, StoryQueue* queue) {
    if (player.peekStat("information") >= 3) {
        queue->inqueue(new BlockEndingVictory());
    }
    else {
        queue->inqueue(new BlockEndingDefeat());
    }
}

void BlockEndingVictory::storyBlockFunction(Player& player, StoryQueue* queue) {
    player.GameOver();
}

void BlockEndingDefeat::storyBlockFunction(Player& player, StoryQueue* queue) {
    player.GameOver();
}

void BlockEndingDie::storyBlockFunction(Player& player, StoryQueue* queue) {
    player.GameOver();
}

void BlockParent::storyBlockFunction(Player& player, StoryQueue* queue)
{
    if (playerSelect == 1) {
        player.changeStat("money", 500);
    }
    else if (playerSelect == 2) {
        player.changeStat("hp", 1);
        player.changeStat("power", 1);
        player.changeStat("invade", 1);
    }
    else {
        player.changeStat("honor", 1);
        player.changeStat("information", 1);
    }
}