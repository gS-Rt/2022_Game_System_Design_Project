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
        script = "길을 걷다 심각한 부상을 입고 쓰러져있는 사람을 발견했다. 그는 자신을 상인이라 소개하며 야수의 습격을 받았다고 한다.\n자신은 가망이 없다며 야수가 아직 근처에 있을지 모르니 도망가라고 말한다.어떻게 할까? ";

        select1 = "그를 치료하고 도와준다." //돈+
        select2 = "신속하게 자리를 뜬다." //잠입++
        select3 = "그의 가방을 강탈한다." //hp-, 명예- ,돈+

        result1 = "치료를 하다 야수가 습격했으나 가뿐히 물리쳤다. 상인은 감사를 표하며 소정의 돈을 주며 떠났다.";
        result2 = "위험한 곳에 오래 있을 필요는 없다. 신속하게 자리를 떴다. 몸이 빨라진 느낌이다.";
        result3 = "가방을 강탈하려다 야수의 습격을 받았다. 가방을 빼앗긴 했지만 상처를 입었고 명성에 안좋은 영향이 있을 것 같다.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class Block1 :public StoryBlock
{
public:
    Block1()
    {
        script = "저 멀리 군인과 시민이 말다툼하는 모습이 보인다. 들어보니 군인이 시민의 딸을 납치했다고 주장하는 듯하다. 어떻게 할까?";

        select1 = "무시하고 지나간다."; //잠입+
        select2 = "대화에 끼어들어본다."; //명예+
        select3 = "시민을 도와 군인과 싸운다."; //hp-, 돈+

        result1 = "괜히 갈등에 엮일 필요는 없다. 가벼운 발걸음으로 가던 길을 갔다.";
        result2 = "대화와 설득을 통해 시민의 딸을 되찾았다. 명성이 조금 올랐다.";
        result3 = "군인과 싸워 이겨 딸을 되찾을 수 있었다. 부상을 조금 입었으나 사례금을 받았다.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class Block2 :public StoryBlock
{
public:
    Block2()
    {
        script = "강도들에게 습격을 당했다! 강도들은 돈만 건네면 곱게 보내주겠다고 한다. 어떻게 할까?";

        select1 = "맞서 싸운다."; //hp-, 돈+, 정보+
        select2 = "돈을 건내준다."; //돈-
        select3 = "도망간다."; //hp-, 잠입+
        
        result1 = "심한 부상을 입었지만 강도들을 물리쳤다. 그들이 가지고 있던 돈과 지도를 얻었다.";
        result2 = "다수를 상대하기엔 무리가 있다. 다행히 그들은 돈만 받고 가던 길을 갔다.";
        result3 = "약간의 피해를 입었지만 무사히 도망쳤다. 몸이 빨라진 느낌이다.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class Block3 :public StoryBlock
{
public:
    Block3()
    {
        script = "비틀거리는 청년을 만났다. 그는 비도덕적인 군대에서 도망쳐 고향으로 가는 중이라 한다. 그는 지쳐있고 좋은 장비를 가진듯하다. 어떻게 할까?";

        select1 = "장비를 강탈한다."; //hp+, 힘+, 명예-
        select2 = "약간의 돈과 함께 격려를 건넨다."; //돈-, 정보+
        select3 = "그를 다독이며 응원해준다."; //변화 없음

        result1 = "그의 장비를 빼앗으려다 그를 죽이고 말았다. 그의 장비를 통해 회복할 수 있었고 더 강해졌다. 하지만 명성엔 안좋은 영향이 있을 것같다.";
        result2 = "그의 여정을 도우려 골드를 줬다. 그는 감사를 표하며 자신이 있던 군대와 전초기지에 대해 알려주며, 조심하라 조언해주었다.";
        result3 = "그의 여정을 응원해주었다. 무사히 그가 무사히 고향에 돌아갈 수 있기를.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class Block4 :public StoryBlock
{
public:
    Block4()
    {
        script = "숨겨져있던 도적의 은신처를 발견했다! 상당한 귀중품들이 보인다. 어떻게 할까?"; //스크립트 초기화

        select1 = "조심스레 전리품을 훔쳐본다."; //잠입 능력에 따라 돈과 잠입 추가, hp-
        select2 = "지도에 위치를 기록하고 떠난다."; //정보+
        select3 = "도적떼를 소탕한다."; //hp-

        result1 = "무사히 잠입에 성공해 훔치는데 성공했다. 꽤 많은 돈을 얻을 수 있을 것 같다.";
        result2 = "지도에 새로운 정보를 기록했다. 정보력이 늘었다.";
        result3 = "예상보다 도적떼가 많았다. 상당한 피해를 입었다.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class Block5 :public StoryBlock
{
public:
    Block5()
    {
        script = "한 나그네가 길에 서있다. 그 나그네는 자신의 수수께끼를 맞춰보라고 한다.\n신기한 주머니에 동전을 한개 넣으면 다음날 두개가 되고, 그다음날 4개가 된다. 이 주머니가 가득차기까지 60일이 걸렸다면, 처음에 동전을 두개를 넣으면 이 주머니가 다 차기까지 며칠이 걸릴까?"; //스크립트 초기화

        select1 = "60일";
        select2 = "59일";
        select3 = "30일";

        result1 = "틀렸네! 지혜를 좀 더 쌓으셔야겠구만! 이 말을 남기며 나그네는 사라졌다.";
        result3 = "틀렸네! 지혜를 좀 더 쌓으셔야겠구만! 이 말을 남기며 나그네는 사라졌다.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class Block6 :public StoryBlock
{
public:
    Block6()
    {
        script = "한 나그네가 길에 서있다. 그 나그네는 자신의 수수께끼를 맞춰보라고 한다.\n번식력이 뛰어난 생쥐가 있다. 생쥐는 한달에 한번씩 새끼를 낳으며 한번에 10마리씩 낳는다고 한다. 또 태어난 새끼는 생후 2개월 부터 새끼를 낳는다. 지금 막 태어난 새끼 한마리를 키우기 시작했다면, 4개월 뒤에는 몇 마리가 되어있을까?"; //스크립트 초기화

        select1 = "131마리";
        select2 = "31마리";
        select3 = "1마리";

        result1 = "틀렸네! 지혜를 좀 더 쌓으셔야겠구만! 이 말을 남기며 나그네는 사라졌다.";
        result2 = "틀렸네! 지혜를 좀 더 쌓으셔야겠구만! 이 말을 남기며 나그네는 사라졌다.";
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class Block7 :public StoryBlock
{
public:
    Block7()
    {
        script = "한 나그네가 길에 서있다. 그 나그네는 자신의 수수께끼를 맞춰보라고 한다.\n촛불 10개를 키고 책을 읽던 남자가 있다. 열려있는 창문에서 바람이 불어와 2개의 촛불이 꺼지고, 얼마후 또다시 바람이 불어와 촛불 4개를 꺼트렸다. 이후 남자는 창문을 닫고 잠을 청했는데, 그러면 다음날 아침에 초가 몇 개가 남아있을까?"; //스크립트 초기화

        select1 = "10개";
        select2 = "6개";
        select3 = "4개";

        result1 = "틀렸네! 지혜를 조금 더 쌓으셔야겠군. 이라고 말하며 나그네는 사라졌다.";
        result3 = "틀렸네! 지혜를 조금 더 쌓으셔야겠군. 이라고 말하며 나그네는 사라졌다.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class Block8 :public StoryBlock
{
public:
    Block8()
    {
        script = "정답일세! 머리가 좋구만. 보상으로 선물을 주겠네. 무엇을 원하는가?"; //스크립트 초기화

        select1 = "돈"; //돈+
        select2 = "건강"; //hp+, 힘+
        select3 = "지혜"; //정보+

        result1 = "나그네는 돈을 주고 떠났다.";
        result2 = "나그네는 빨간 물약을 건넸다. 물약을 마시니 상처가 낫고 강해진 느낌이 든다.";
        result3 = "나그네는 파란 물약을 건넸다. 물약을 마시니 머리 회전이 빨라진 느낌이 든다.";
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class Block9 :public StoryBlock
{
public:
    Block9()
    {
        script = "적국의 순찰대원을 만났다! 다행히 지나가나 싶었지만 순찰대원이 멈추라 말을 건다. 어떻게 할까?"; //스크립트 초기화

        select1 = "황급히 도망친다."; //잠입+
        select2 = "무슨 일인지 뒤돌아 본다."; //돈+ 
        select3 = "그들을 공격한다."; //hp-, 잠입+

        result1 = "적국의 군인과 마주칠 이유는 없다. 황급히 자리를 떴다. 달리기가 빨라진 느낌이다."; 
        result2 = "그들은 돈을 주며 흘리지 말라고 해준다. 내 돈은 아니였지만 받고 무사히 넘어갔다.";
        result3 = "공격하고 달아났다. 공격과정에서 약간의 부상을 입었으나 몸이 빨라진 느낌이다.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class Block10 :public StoryBlock
{
public:
    Block10()
    {
        script = "숲에서 의문의 빨간 버섯을 발견했다. 낯선 사람이 자신이 식물학자라 소개하며 그 버섯을 달라고 한다. 어떻게 할까?"; //스크립트 초기화

        select1 = "비싼 버섯인 것 같으니 챙긴다."; //hp-
        select2 = "그에게 버섯을 넘긴다."; //돈+
        select3 = "버섯을 줄테니 버섯에 대해 알려달라고 한다."; //정보+

        result1 = "그를 내쫓고 버섯을 집자마자 강한 고통이 느껴졌다. 아무래도 맹독버섯을 만진 것 같다.";
        result2 = "낯선 사람은 돈을 주고 능숙하게 버섯을 채집해갔다.";
        result3 = "그는 그 버섯이 강한 독버섯임을 알려주고 다양한 정보를 알려줬다. 지식이 늘었다.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class Block11 :public StoryBlock
{
public:
    Block11()
    {
        script = "건달패가 시민들의 물건을 빼앗고 있다. 건달패의 마차에서 물건을 훔칠 수 있을 것 같다. 어떻게 할까?"; //스크립트 초기화

        select1 = "건달을 공격해 물건을 되찾아 준다."; //명예+
        select2 = "물건을 뺏아 상인에게 넘긴다."; //돈+
        select3 = "건달패의 마차를 뒤져본다."; //정보+

        result1 = "사람들이 연신 감사를 표한다. 평판이 좋아졌다.";
        result2 = "높은 값에 팔 수 있었다. 많은 돈을 얻었다.";
        result3 = "적국의 지도를 얻었다. 정보가 늘었다.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class Block12 :public StoryBlock
{
public:
    Block12()
    {
        script = "노상점을 만났다. 어서 옵쇼! \"1인 1물품 구매만 가능합니다. 신중히 골라보세요! 모두 100원입니다.\""; //스크립트 초기화

        select1 = "제목이 지워진 책을 산다.";
        select2 = "효능을 알 수 없는 포션을 산다."; 
        select3 = "딱히 살 물건이 없어보이니 그냥 간다."; //none

        result3 = "살 물건이 없고 시간도 없으니 발걸음을 재촉했다.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class Block13 :public StoryBlock
{
public:
    Block13()
    {
        script = "악마가 눈 앞에 나타나 나에게 거래를 제안한다. 어떻게 할까?"; //스크립트 초기화

        select1 = "힘을 달라고 한다."; //힘+, 명성-
        select2 = "지식을 달라고 한다."; //지식+, 명성-
        select3 = "무시한다."; //명성+

        result1 = "힘을 얻었다. 악마와 거래해 평판이 안 좋아질 것 같다."; //카리스마 +
        result2 = "지식을 얻었다. 악마와 거래해 평판이 안 좋아질 것 같다.";//돈 300
        result3 = "뒤에서 악마의 흐느끼는 소리가 들린다. 악마를 울려 명성이 올라갔다."; //정보력 2+ 

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class Block14 :public StoryBlock
{
public:
    Block14()
    {
        script = "알 수 없는 상자가 길가에 떨어져있다. 어떻게 할까?"; //스크립트 초기화

        select1 = "열어본다.";
        select2 = "무시한다."; //none

        result2 = "위험을 감수하고 괜히 열어볼 필요는 없을 거 같다."

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class Block15 :public StoryBlock
{
public:
    Block15()
    {
        script = "소원을 이뤄주는 연못이다. 연못엔 사람들이 던진 동전이 많아보인다. 어떻게 할까?"; //스크립트 초기화

        select1 = "몸이 좋아지게 해달라고 소원을 빈다."; //돈-, hp+, 힘+, 잠입+
        select2 = "임무를 성공할 수 있게 해달라고 소원을 빈다."; //돈-, 정보+, 명성+
        select3 = "연못에 있는 동전을 챙긴다."; //돈+

        result1 = "건강해지는 느낌이 든다. 신체능력이 올라간 느낌이다."; //카리스마 +
        result2 = "할 수 있다는 자신감이 차오른다. 씩씩하게 여정을 계속한다."
        result3 = "소원같은 건 믿지 않는다. 실리적으로 돈을 챙겼다."

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class BlockChoiceStat :public StoryBlock
{
public:
    BlockChoiceStat()
    {
        script = "모험을 시작하기전에 물어볼게요. 당신은 누구인가요?"; //스크립트 초기화

        select1 = "저는 뛰어난 학자입니다."; //명성+, 정보력++
        select2 = "저는 용맹한 군인입니다."; //hp+, 힘+, 잠입+
        select3 = "저는 돈많은 백수입니다."; //돈+

        result1 = "건강해지는 느낌이 든다. 신체능력이 올라간 느낌이다."; //카리스마 +
        result2 = "할 수 있다는 자신감이 차오른다. 씩씩하게 여정을 계속한다."
        result3 = "소원같은 건 믿지 않는다. 실리적으로 돈을 챙겼다."

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class BlockStoryStart :public StoryBlock
{
public:
    BlockStoryStart()
    {
        script = "당신의 나라는 사이가 좋지 않은 나라와 광활한 숲을 경계로 있습니다.\n어느날 전쟁의 기미를 눈치챈 국왕은 당신을 적국으로 보내 전쟁의 정보를 얻어오라 명령했습니다.\n당신은 사명감을 가지고 여정을 떠납니다."; //스크립트 초기화
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class BlockMainStory :public StoryBlock
{
public:
    BlockMainStory()
    {
        script = "드디어 적국에 도착했다. 어디로 가야 전쟁에 대한 정보를 얻을 수 있을까?"; //스크립트 초기화

        select1 = "성으로 가본다.";
        select2 = "암시장으로 가본다."; 
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class BlockMainStoryCastle :public StoryBlock
{
public:
    BlockMainStoryCastle()
    {
        script = "성 정문 근처에 도착하자 경비병들이 보인다. 어디로 가야 할까?"; //스크립트 초기화

        select1 = "정문으로 가자.";
        select2 = "개구멍을 찾아보자."; 
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class BlockMainStoryCastleDoor :public StoryBlock
{
public:
    BlockMainStoryCastleDoor()
    {
        script = "정문에 들어서자 경비병들이 보인다."; //스크립트 초기화
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class BlockMainStoryCastleHole :public StoryBlock
{
public:
    BlockMainStoryCastleHole()
    {
        script = "성을 한바퀴돌아 들어갈만한 개구멍을 찾았다."; //스크립트 초기화
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class BlockMainStoryFinal :public StoryBlock
{
public:
    BlockMainStoryFinal()
    {
        script = "정보를 찾았다! 이제 가지고 돌아가자!"; //스크립트 초기화
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class BlockMainStoryMarket :public StoryBlock
{
public:
    BlockMainStoryMarket()
    {
        script = "암시장이지만 생각보다 활기차고 시끌벅적한 분위기이다. 정보를 찾아보자."; //스크립트 초기화
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class BlockEndingVictory :public StoryBlock
{
public:
    BlockEndingVictory()
    {
        script = "당신이 얻은 정보로 성공적으로 전쟁을 대비해 승전했습니다!\n당신은 많은 부와 명성을 얻었고 당신의 이름은 오랫동안 기억될 것입니다."; //스크립트 초기화
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class BlockEndingDefeat :public StoryBlock
{
public:
    BlockEndingDefeat()
    {
        script = "당신은 정보를 가져오긴 했으나 거짓 정보였습니다! 잘못된 정보로 전쟁을 준비한 나머지 전쟁에서 패배했고,\n사람들은 당신에게 책임을 묻기 시작했으며 당신의 여정은 감옥에 갇히며 마무리되었습니다."; //스크립트 초기화
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};

class BlockEndingDie :public StoryBlock
{
public:
    BlockEndingDie()
    {
        script = "hp가 모두 닳았습니다!\n당신의 모험은 여기까지인가보군요...."; //스크립트 초기화
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //플레이어 객체 참조로 값 변경 가능
};
