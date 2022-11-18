#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "storyBlolckQueue.h"
using namespace std;

void StoryQueue::inqueue(StoryBlock* storyBlock)
{
    StoryBlock* temp = front;

    storyBlock->setNext(NULL);
    if (temp == NULL)
    {
        front = storyBlock;
        return;
    }
    while (temp->getNext() != NULL)
        temp = temp->getNext();
    temp->setNext(storyBlock);
}

StoryBlock* StoryQueue::dequeue()
{
    StoryBlock* temp = front;

    if (temp == NULL)
        return NULL;
    front = front->getNext();

    return temp;
}