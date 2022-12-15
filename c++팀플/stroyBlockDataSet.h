#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "storyBlock.h"
#include "player.h"
#include "storyBlolckQueue.h"
using namespace std;

class Block0 :public StoryBlock
{
public:
    Block0()
    {
        script = "길을 걷다 심각한 부상을 입고 쓰려저있는 사람을 발견했다. 그는 자신을 상인이라고 말하며 야수에게 습격을 당했다고 하고 자신은 가망이 없다고 말하며 근처에 자신을 이렇게 만든 야수가 근처에 있을지도 모르니 어서 도망가라고 말했다. 당신의 선택은?";

        select1 = "1.그를 치료하고 도와준다."; //선택지 1
        select2 = "2.신속히 도망간다. ."; //선택지 2(선택)
        select3 = "그가 가지고 있는 가방을 강탈한다."; //선택지 3(선택)

        result1 = "그를 치료하던중 근처에 있던 야수가 습격하였지만 성공적으로 물리쳤다. 상인은 감사를 표하고 소정의 돈을 주고 떠났다."; //선택지 1 결과
        result2 = "근처에 그 야수가 있는 낌새를 느껴 신속히 도망갔다. 그 상인이 어떻게 될지는 모르겠지만, 잠입능력이 조금 올라갔다."; //선택지 2 결과(선택)
        result3 = "상인인 그의 가방을 뺏으려고 시도하다 야수가 덮쳤다. 살아남고 그가 가진 가방또한 강탈하긴 했지만 상당히 다치고 카리스마가 하락하였다."; //선택지 3 결과(선택)

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};
class Block1 :public StoryBlock
{
public:
    Block1()
    {
        script = "길을 걷다 사람이 적국의 군인으로 보이는 사람과 한 시민이 격렬하게 말싸움을 하고있는 모습을 목격하였다. 시민은 저 군인이 자신의 딸을 납치하고 있다며 나에게 도움을 요청하였다. 군인은 한명뿐이라 제압할 수 있겠지만, 적국의 군인을 건들여봤자 좋은일은 없을것 같다. 당신의 선택은?"; //스크립트 초기화

        select1 = "시민을 도와 군인을 사살한다."; //선택지 1
        select2 = "무시하고 지나간다."; //선택지 2(선택)
        select3 = "군인을 설득해본다."; //선택지 3(선택)

        result1 = "군인을 제압하는 과정에서  반격을 당해 HP가 줄어들었다. 시민은 감사를 표하며 소정의 돈을 줬다."; //선택지 1 결과
        result2 = "괜히 엮이기 싫으니 두사람에게 들키지 않고 몰래 지나갔다. 잠입능력이 조금 올라갔다."; //선택지 2 결과(선택)
        result3 = "군인을 설득과 협박을 하여 결국 납치는 막았다. 군인은 나의 얼굴을 기억하겠다고 하면서 떠났다. 카리스마가 조금 상승하였다."; //선택지 3 결과(선택)

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};
class Block2 :public StoryBlock
{
public:
    Block2()
    {
        script = "강도들 에게 습격을 당했다! 강도들은 내가 가지고 있는 골드를 전부 넘기면 목숨만은 살려주겠다고 하며 위협하였다. 보이는 강도의 수는 3명이며 근처에 더 있을수도 있다. 어떻게 할 것인가? "; //스크립트 초기화

        select1 = "맞서 싸운다."; //선택지 1
        select2 = "돈을 건내준다."; //선택지 2(선택)
        select3 = "도망간다."; //선택지 3(선택)
        result1 = "상당한 상처를 입었지만 강도들을 모두 처리했다. 그들이 가지고있던 돈과 지도를 얻었다."; //HP 깎임, 돈+,정보력+
        result2 = "아무리 정식 훈련을 받은 병사라도 혼자서 셋을 이길수는 없다. 그들과 협상을하여 조금의 돈만주고 살아남았다."; //돈 -100, 협상력 + 
        result3 = "약간의 피해를 입긴 했지만 성공적으로 도망쳤다."; //HP-,침투럭 +

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};
class Block3 :public StoryBlock
{
public:
    Block3()
    {
        script = "탈영병으로 보이는 군인을 만났다. 그는 비도덕적인 군대에서 도망쳐나왔고 부모님을 보기위해 고향으로 돌아가는 중이라고 한다. 그는 상당히 야위어보이며 그가 가지고 있는 장비를 얻을 수 있을것 같다. 어떻게 할 것인가?"; //스크립트 초기화

        select1 = "장비를 강탈한다."; //선택지 1
        select2 = "그에게 100골드를 준다."; //선택지 2(선택)
        select3 = "그냥 지나친다."; //선택지 3(선택)

        result1 = "그가 가지고있는 장비를 뺏으려다 지나친 저항에 그를 죽였다. 장비를 얻긴하였지만, 그의 품속에서 부모님께 쓴 편지를 보고 양심에 가책을 느꼇다."; //hp+,힘+,카리스마--
        result2 = "그의 여정을 돕기위해 100골드를 적선해주었다. 그는 감사를 표하며 숲속에 자신이 있던 전초기지의 위치를 알려주었고, 그곳을 피해가라고 조언해주었다."; //돈 -100, 엔딩을 위한 정보력 ++
        result3 = "그의 여정을 응원하며 떠났다."; //none

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};
class Block4 :public StoryBlock
{
public:
    Block4()
    {
        script = "숲을 지나다 시끄러운 소리가 들려 확인해 보니 도적들의 은신처를 발견했다. 상당히 많은 양의 전리품또한 보인다. 어떻게 할것인가?"; //스크립트 초기화

        select1 = "잠입해서 전리품을 훔쳐본다."; //선택지 1
        select2 = "위치만 확인하고 가던길을 간다."; //선택지 2(선택)
        select3 = "전부 죽이고 약탈한다!"; //선택지 3(선택)

        result1 = "잠입에 성공하여 돈을 얻었다."; //돈+500, if 잠입력=<7(잠입실패, hp소폭 깎이고 도망침)
        result2 = "위치를 지도에 기록하고 가던길을 간다."; //정보력 +100
        result3 = "습격했지만 예상보다 너무 많은 도적이 기다리고 있었다. 상당한 피해를 입고 도망쳤다."; //hp -3

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};
class Block5 :public StoryBlock
{
public:
    Block5()
    {
        script = "길을 걸어가다 나그네를 만났다. 그 나그네는 자신이 내는 수수께끼를 맞춰보라고 한다.||신기한 주머니에 동전을 한개 넣으면 다음날 두개가 되고, 그다음날 4개가 된다. 이 주머니가 가득차기까지 60일이 걸렸다면, 처음에 동전을 두개를 넣으면 이 주머니가 다 차기까지 몇일이 걸릴까?|| 당신의 답은? "; //스크립트 초기화

        select1 = "60"; //선택지 1
        select2 = "59"; //선택지 2(선택)
        select3 = "30"; //선택지 3(선택)

        result1 = "틀렸네! 지혜를 조금 더 쌓으셔야겠군. 이라고 말하며 나그네는 사라졌다."; //선택지 1 결과
        result2 = "Block8로"; //선택지 2 결과(선택)
        result3 = "틀렸네! 지혜를 조금 더 쌓으셔야겠군. 이라고 말하며 나그네는 사라졌다."; //선택지 3 결과(선택)

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class Block6 :public StoryBlock
{
public:
    Block6()
    {
        script = "길을 걸어가다 나그네를 만났다. 그 나그네는 자신이 내는 수수께끼를 맞춰보라고 한다. ||번식력이 뛰어난 생쥐가 있다. 생쥐는 한달에 한번씩 새끼를 낳으며 한번에 10마리씩 낳는다고 한다. 또 태어난 새끼는 생후 2개월 부터 새끼를 낳는다. 지금 막 태어난 새끼 한마리를 키우기 시작했다면, 4개월 뒤에는 몇마리가 되어있을까?|| 당신의 답은?"; //스크립트 초기화

        select1 = "131"; //선택지 1
        select2 = "31"; //선택지 2(선택)
        select3 = "1"; //선택지 3(선택)

        result1 = "틀렸네! 지혜를 조금 더 쌓으셔야겠군. 이라고 말하며 나그네는 사라졌다"; //선택지 1 결과
        result2 = "틀렸네! 지혜를 조금 더 쌓으셔야겠군. 이라고 말하며 나그네는 사라졌다"; //선택지 2 결과(선택)
        result3 = "Block8로"; //선택지 3 결과(선택)

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};
class Block7 :public StoryBlock
{
public:
    Block7()
    {
        script = "길을 걸어가다 나그네를 만났다. 그 나그네는 자신이 내는 수수께끼를 맞춰보라고 한다.||촛불 10개를 키고 책을 읽던 남자가 있다. 열려있는 창문에서 바람이 불어와 2개의 촛불이 꺼지고, 얼마후 또다시 바람이 불어와 촛불 4개를 꺼트렸다. 이후 남자는 창문을 닫고 잠을 청했는데, 그러면 다음날 아침에 초가 몇개가 남아있을까?|| 당신의 답은?"; //스크립트 초기화

        select1 = "10개"; //선택지 1
        select2 = "6개"; //선택지 2(선택)
        select3 = "4개"; //선택지 3(선택)

        result1 = "틀렸네! 지혜를 조금 더 쌓으셔야겠군. 이라고 말하며 나그네는 사라졌다."; //선택지 1 결과
        result2 = "Block8로"; //선택지 2 결과(선택)
        result3 = "틀렸네! 지혜를 조금 더 쌓으셔야겠군. 이라고 말하며 나그네는 사라졌다."; //선택지 3 결과(선택)

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};
class Block8 :public StoryBlock
{
public:
    Block8()
    {
        script = "정답일세! 보기보단 머리가 좋군그래. 보상으로 당신이 원하는 것 하나를 들어주겠네. 무엇을 원하는가?"; //스크립트 초기화

        select1 = "돈"; //선택지 1
        select2 = "내구력"; //선택지 2(선택)
        select3 = "지력"; //선택지 3(선택)

        result1 = "나그네는 돈을주고 떠났다.."; //돈 +300
        result2 = "나그네는 신비한 포션을 주고 떠났다. 포션을 마시니 힘과 체력이 올라간 느낌이 든다."; //hp+3,힘+2
        result3 = "나그네는 신비한 포션을 주고 떠났다. 포션을 마시니 몸의 움직임과 어휘력이 올라간 느낌이 든다."; //카리스마+2,잠입능력+2

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};
class Block9 :public StoryBlock
{
public:
    Block9()
    {
        script = "길을 걷다 적국의 순찰대원들의 무작위 검문을 당하였다. 다행히 아무런 문제 없이 넘어가 그들을 지나치고 있는데 갑자기 순찰대원들이 멈추라고 소리친다. 들킨것인가?"; //스크립트 초기화

        select1 = "황급히 도망친다.";
        select2 = "무슨일인지 뒤돌아 본다."; 
        select3 = "그들을 공격한뒤 달아난다."; 

        result1 = "그들의 멈추라는 소리를 무시하고 황급히 달아났다."; //침투력 1+
        result2 = "그들은 돈을 주며 흘리지 말고 잘 간수하라고 말한뒤 떠났다. 내 돈은 아니지만 어쨋든 별 탈없이 넘어갔다."; //돈+100
        result3 = "그들에게 따라잡히지 않도록 공격한 뒤 달아났다. 공격과정에서 약간의 부상을 입었다."; //hp-1, 침투력 1+

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};
class Block10 :public StoryBlock
{
public:
    Block10()
    {
        script = "숲을 지나던중 빨간색의 사슴 뿔처럼 생긴 버섯을 발견했다. 그와 동시에 낮선사람 또한 마주쳤는데 그 남성 식물학자처럼 보이고 숲을 자주 드나들은 것 처럼 보인다. 이 남성은 그 버섯을 자신에게 팔라는 제안을 건넸다."; //스크립트 초기화

        select1 = "버섯의 색깔과 모양, 낮선 사람의 반응을 보니 비싼것이 틀림없다. 즉시 주워서 갈길 간다.";
        select2 = "낮선이의 제안을 받아드린다."; 
        select3 = "돈은 됐으니 쓸만한 정보가 있으면 알려달라고 요청한다."; 

        result1 = "그 버섯을 집고나서 얼마 지나지 않아 상당한 고통을 느껴 버섯을 버렸다. 그 버섯은 맹독버섯인 붉은뿔사슴버섯 이었다."; //체력-4
        result2 = "낮선 사람은 약간의 돈을주고 장갑을 낀채 그 버섯을 채취해 갔다."; //돈+
        result3 = "낮선 사람은 그 버섯이 매우 강한 독을 가지고 있는 버섯이란걸 알려주었고, 근처에 성질이 나쁜 군인들의 거점이 있으니 피해가라고 알려주었다."; //정보력 1+

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};
class Block11 :public StoryBlock
{
public:
    Block11()
    {
        script = "작은 마을에서 쉬던 도중 큰 소란이 일어난 것을 목격했다. 세금을 걷는 징수원이 세금을 낼수 없는 하층민의 아버지의 유품으로 보이는 목걸이를 압류한 상태이고 하층민은 눈물을 흘리고 있었다. 징수원의 마차에서 그 물건을 훔칠 수 있을것 같다."; //스크립트 초기화

        select1 = "유품을 훔쳐 다시 돌려준다.";
        select2 = "매우 이쁜 목걸이 이니 상당히 비싼값에 팔 수 있을것같다. 유품을 훔쳐 다른 상인에게 판다."; 
        select3 = "유품말고 다른 물건을 찾아본다."; 

        result1 = "하층민은 연신 감사의 인사를 표하며 떠났다."; //카리스마 +
        result2 = "예상대로 상당히 높은값을 받았다.";//돈 300
        result3 = "침투할려는 도시의 내부 지도를 찾았다."; //정보력 2+ 

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};
