#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
//#include<ctime>
#include <time.h>
#include<sstream>
#include "storyBlock.h"
#include "storyBlolckQueue.h"
#include "player.h"
#include "gameManager.h"
using namespace std;

int main()
{
    GameManager gameManager; //게임 진행 관리 클래스
    StoryBlock* value=NULL;

    gameManager.startGame(); //게임 실행


    return 0;
}