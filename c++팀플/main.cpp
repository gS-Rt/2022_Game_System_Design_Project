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

/*
class StoryBlockInit
{
public:
    int type;
    string script;

};

class StoryBlockInit_1 :public StoryBlockInit
{
public:
    string sel1;
    vector<int> statType1;
    vector<int> statValue1;
    string result1;
    StoryBlockInit_1(int blockType, string script, string select1, vector<int> statType1, vector<int> changeValue1, string result1)
    {
        this-> type = blockType;
        this->script = script;
        this->sel1 = select1;

        for (int i = 0; i < statType1.size(); i++)
            this->statType1.push_back(statType1[i]);
        for (int i = 0; i < changeValue1.size(); i++)
            this->statType1.push_back(changeValue1[i]);

        this->result1 = result1;
    }
};

class StoryBlockInit_2 :public StoryBlockInit
{
public:
    string sel1;
    string sel2;
    vector<int> statType1;
    vector<int> statValue1;
    vector<int> statType2;
    vector<int> statValue2;
    string result1;
    string result2;
    StoryBlockInit_2(int blockType, string script, string select1, string select2, vector<int> statType1, vector<int> changeValue1, vector<int> statType2, vector<int> changeValue2, string result1, string result2)
    {
        this->type = blockType;
        this->script = script;
        this->sel1 = select1;
        this->sel2 = select2;

        for (int i = 0; i < statType1.size(); i++)
            this->statType1.push_back(statType1[i]);
        for (int i = 0; i < changeValue1.size(); i++)
            this->statType1.push_back(changeValue1[i]);

        for (int i = 0; i < statType2.size(); i++)
            this->statType2.push_back(statType2[i]);
        for (int i = 0; i < changeValue2.size(); i++)
            this->statType2.push_back(changeValue2[i]);

        this->result1 = result1;
        this->result2 = result2;
    }
};

class StoryBlockInit_3 :public StoryBlockInit
{
public:
    string sel1;
    string sel2;
    string sel3;
    vector<int> statType1;
    vector<int> statValue1;
    vector<int> statType2;
    vector<int> statValue2;
    vector<int> statType3;
    vector<int> statValue3;
    string result1;
    string result2;
    string result3;
    StoryBlockInit_3(int blockType, string script, string select1, string select2, string select3, vector<int> statType1, vector<int> changeValue1, vector<int> statType2, vector<int> changeValue2, vector<int> statType3, vector<int> changeValue3, string result1, string result2, string result3)
    {
        this->type = blockType;
        this->script = script;
        this->sel1 = select1;
        this->sel2 = select2;
        this->sel3 = select3;
        
        for (int i = 0; i < statType1.size(); i++)
            this->statType1.push_back(statType1[i]);
        for (int i = 0; i < changeValue1.size(); i++)
            this->statType1.push_back(changeValue1[i]);

        for (int i = 0; i < statType2.size(); i++)
            this->statType2.push_back(statType2[i]);
        for (int i = 0; i < changeValue2.size(); i++)
            this->statType2.push_back(changeValue2[i]);

        for (int i = 0; i < statType3.size(); i++)
            this->statType3.push_back(statType3[i]);
        for (int i = 0; i < changeValue3.size(); i++)
            this->statType3.push_back(changeValue3[i]);

        this->result1 = result1;
        this->result2 = result2;
        this->result3 = result3;
    }
};
*/

class StoryBlockReader
{
    int blockCount;
    int preCount;
    string blockName;
    ifstream blockFile;

    int blockType;
    int selectAmount;
    string script;
    string select1; //선택지 1~3개
    string select2;
    string select3;

    vector<int> statType1;
    vector<int> changeValue1;
    vector<int> statType2;
    vector<int> changeValue2;
    vector<int> statType3;
    vector<int> changeValue3;

    string result1;
    string result2;
    string result3; //각 선택지 선택했을 때 결과 스크립트

    int nextBlockTerm; //연계 블록 있을 시 사용
    int nextBlockNum;

public:
    StoryBlockReader()
    {
        blockCount = 0;
        blockName = "block.txt";
        preCount = -1;
    }
    void genBlock();

};

void StoryBlockReader::genBlock()
{
    string countBlockName;
    string temp;
    string buff;
    StoryBlock* createdBlock;

    do
    {
        srand(time(NULL));
        blockCount = rand() % 10; //바꿔줘야 됨 0~9 파일 입력
    } while (blockCount == preCount);
    blockCount = 0; //임시 고정 코드
    countBlockName = to_string(blockCount) + blockName;
    blockFile.open(countBlockName);
    cout << countBlockName << endl;
    if (!blockFile)
    {
        cout << "오류: 스토리 블록 누락, 또는 잘못된 파일 이름, 게임 종료." << endl;
        exit(1);
    }

    getline(blockFile, temp);
    blockType = stoi(temp);
    getline(blockFile, temp);
    selectAmount = stoi(temp);
    getline(blockFile, script);

    if (selectAmount == 1)
    {
        getline(blockFile, select1);

        getline(blockFile, temp);
        istringstream iss(temp);
        while (getline(iss, buff, ' '))
        {
            statType1.push_back(stoi(buff));               // 절삭된 문자열을 vector에 저장
        }

        getline(blockFile, temp);
        iss.str(temp);
        while (getline(iss, buff, ' '))
        {
            changeValue1.push_back(stoi(buff));               // 절삭된 문자열을 vector에 저장
        }

        getline(blockFile, result1);
    }
    else if (selectAmount == 2)
    {
        getline(blockFile, select1);
        getline(blockFile, select2);

        getline(blockFile, temp);
        istringstream iss(temp);
        while (getline(iss, buff, ' '))
        {
            statType1.push_back(stoi(buff));               // 절삭된 문자열을 vector에 저장
        }
        getline(blockFile, temp);
        iss.str(temp);
        while (getline(iss, buff, ' '))
        {
            statType2.push_back(stoi(buff));               // 절삭된 문자열을 vector에 저장
        }

        getline(blockFile, temp);
        iss.str(temp);
        while (getline(iss, buff, ' '))
        {
            changeValue1.push_back(stoi(buff));               // 절삭된 문자열을 vector에 저장
        }
        getline(blockFile, temp);
        iss.str(temp);
        while (getline(iss, buff, ' '))
        {
            changeValue2.push_back(stoi(buff));               // 절삭된 문자열을 vector에 저장
        }

        getline(blockFile, result1);
        getline(blockFile, result2);
    }
    else
    {
        getline(blockFile, select1);
        getline(blockFile, select2);
        getline(blockFile, select3);

        getline(blockFile, temp);
        istringstream iss(temp);
        while (getline(iss, buff, ' '))
        {
            statType1.push_back(stoi(buff));               // 절삭된 문자열을 vector에 저장
        }
        getline(blockFile, temp);
        iss.str(temp);
        while (getline(iss, buff, ' '))
        {
            statType2.push_back(stoi(buff));               // 절삭된 문자열을 vector에 저장
        }
        getline(blockFile, temp);
        iss.str(temp);
        while (getline(iss, buff, ' '))
        {
            statType3.push_back(stoi(buff));               // 절삭된 문자열을 vector에 저장
        }

        getline(blockFile, temp);
        iss.str(temp);
        while (getline(iss, buff, ' '))
        {
            changeValue1.push_back(stoi(buff));               // 절삭된 문자열을 vector에 저장
        }
        getline(blockFile, temp);
        iss.str(temp);
        while (getline(iss, buff, ' '))
        {
            changeValue2.push_back(stoi(buff));               // 절삭된 문자열을 vector에 저장
        }
        getline(blockFile, temp);
        iss.str(temp);
        while (getline(iss, buff, ' '))
        {
            changeValue3.push_back(stoi(buff));               // 절삭된 문자열을 vector에 저장
        }

        getline(blockFile, result1);
        getline(blockFile, result2);
        getline(blockFile, result3);
    }

    if (blockType==1) //연계 블록 정보 추출
    {
        getline(blockFile, temp);
        nextBlockTerm = stoi(temp);
        getline(blockFile, temp);
        nextBlockNum = stoi(temp);
    }

    blockFile.close(); //파일 닫기

    if (selectAmount == 1)
        createdBlock = new StoryBlock();

    preCount = blockCount;
}





int main()
{
    GameManager gameManager; //게임 진행 관리 클래스
    StoryQueue queue;
    StoryBlock* value=NULL;
    int i = 0;
    int j = 1;
    string temp;

    int num;

    StoryBlockReader storyBlockReader;

    storyBlockReader.genBlock();
    //vector<StoryBlock*> storyDataSet; //스토리 블록 생성 후 로딩해놓는 곳, 여기서 하나씩 빼와서 생성
    /*
    StoryBlockInit* storyDataSet[5];
    //storyDataSet.push_back(new StoryBlock(0, "테스트 1 스크립트", "1번", "2번", "3번", { 0,1 }, { 3,-2 }, { 1 }, { 3 }, { 1,2,3 }, { 5,10,-14 }, "결과문1", "결과문2", "결과문3"));
    //storyDataSet.push_back(new StoryBlock(0, "테스트 2 스크립트", "1번", "2번", { 0,1 }, { 3,-2 }, { 3 }, { 1,2,3 }, "결과문1", "결과문2"));
    //storyDataSet.push_back(new StoryBlock(0, "테스트 3 스크립트", "1번", { 0,1 }, { 3 }, "결과문1"));
    //storyDataSet.push_back(new StoryBlock(0, "테스트 4 스크립트", "1번", "2번", "3번", { 0,1,2,3,4 }, { 3,-2,3,3,3 }, { 1 }, { 3 }, { 1,2,3 }, { 5,10,-14 }, "결과문1", "결과문2", "결과문3"));
    //storyDataSet.push_back(new StoryBlock(0, "테스트 5 스크립트", "1번", "2번", "3번", { 0 }, { 3 }, { 1 }, { 3 }, { 1,2,3 }, { 5,10,-14 }, "결과문1", "결과문2", "결과문3"));
    storyDataSet[0] = new StoryBlockInit_3(0, "테스트 1 스크립트", "1번", "2번", "3번", { 0,1 }, { 3,-2 }, { 1 }, { 3 }, { 1,2,3 }, { 5,10,-14 }, "결과문1", "결과문2", "결과문3");
    storyDataSet[1] = new StoryBlockInit_2(0, "테스트 2 스크립트", "1번", "2번", { 0,1 }, { 3,-2 }, { 3 }, { 1,2,3 }, "결과문1", "결과문2");
    storyDataSet[2] = new StoryBlockInit_1(0, "테스트 3 스크립트", "1번", { 0,1 }, { 3 }, "결과문1");
    storyDataSet[3] = new StoryBlockInit_3(0, "테스트 4 스크립트", "1번", "2번", "3번", { 0,1,2,3,4 }, { 3,-2,3,3,3 }, { 1 }, { 3 }, { 1,2,3 }, { 5,10,-14 }, "결과문1", "결과문2", "결과문3");
    storyDataSet[4] = new StoryBlockInit_3(0, "테스트 5 스크립트", "1번", "2번", "3번", { 0 }, { 3 }, { 1 }, { 3 }, { 1,2,3 }, { 5,10,-14 }, "결과문1", "결과문2", "결과문3");
    
    srand((unsigned int)time(NULL));
    num = rand()%4;

    while (1) //메인 반복문
    {
        //gameManager.selectNextBlock();//다음 블록 선택
        cout << "메인루프" << endl;
        cin >> i;
        if (i == 1)
        {
            num = rand() % 4;
            //temp = to_string(j);
            //temp += "번 테스트 스크립트";

            //queue.inqueue(storyDataSet[num % 4]);
            //queue.inqueue(new StoryBlock(0, "테스트 4 스크립트", "1번", "2번", "3번", { 0,1,2,3,4 }, { 3,-2,3,3,3 }, { 1 }, { 3 }, { 1,2,3 }, { 5,10,-14 }, "결과문1", "결과문2", "결과문3"));
            


            queue.inqueue(storyDataSet[(int)num % 4]);
            cout << " 삽입" << endl;
        }
        else if (i == 2)
        {
            cout << "큐 출력" << endl;
            value = queue.dequeue();
            if (value != NULL)
            {
                value->printNormalBlock();
                delete value;
            }
            else
                cout << "큐 비었음" << endl;
        }

        if (gameManager.isCloseGame() == true) //게임 종료 트리거
            break;
    }
    //블록 호출, 블록 종료되면 메인루프로 돌아와 다음 블록 호출, 반복
    //한 블록 안에서 필요한 계산은 모두 해당 블록 또는 지역 함수에서 모두 처리
    //스토리 클래스의 기본 형태는 매개 인자로 스크립트와 선택지 입력 ex) StoryA(string "스토리 스크립트", string "선택지1", string "선택지2")
    //선택지의 개수는 개수에 대응되는 생성자를 여러 개 만들어 처리
    //반환값은 참조나 return으로 게이지 변동, 선택한 선택지 반환
    //메인 알고리즘은 현재 진행 블록 개수, 게이지 수치, 필수 연계 스토리 블록 유무 등에 따라 다음 블록 선택
    //한 스토리 블록이 중복되어 연달아 나오는 것을 피하기 위해 참조 비트같이 출력 블록 체크 필요, 일정 조건마다 체크 초기화
    //중간중간 기본 스토리 블록 형태와 다른 블록은 별도 메소드 호출 ex) 초기 직업과 배경 선택, 게임 클리어&오버 화면 등

    cout << "게임 종료" << endl;
    */


    return 0;
}