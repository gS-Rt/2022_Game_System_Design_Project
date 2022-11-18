#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "storyBlock.h"
#include "storyBlolckQueue.h"
#include "player.h"
#include "gameManager.h"
using namespace std;



int main()
{
    GameManager gameManager; //게임 진행 관리 클래스
    StoryQueue queue;
    StoryBlock* value=NULL;
    int i = 0;
    int j = 1;
    string temp;
    while (1) //메인 반복문
    {
        //gameManager.selectNextBlock();//다음 블록 선택

        cin >> i;
        if (i == 1)
        {
            temp = to_string(j);
            temp += "번 테스트 스크립트";
            queue.inqueue(new StoryBlock(0, temp, "1번", "2번"));
            cout << temp << " 삽입" << endl;
            j++;
        }
        else if (i == 2)
        {
            cout << "큐 출력" << endl;
            value = queue.dequeue();
            if (value != NULL)
                value->printNormalBlock();
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

    return 0;
}