#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "storyBlock.h"
using namespace std;

class StoryQueue
{
    StoryBlock* front;
public:
    StoryQueue()
    {
        front = NULL;
    }
    void inqueue(StoryBlock* storyBlock);
    StoryBlock* dequeue();
};