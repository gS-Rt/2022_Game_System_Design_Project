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
        script = "���� �ȴ� �ɰ��� �λ��� �԰� �������ִ� ����� �߰��ߴ�. �״� �ڽ��� �����̶� �Ұ��ϸ� �߼��� ������ �޾Ҵٰ� �Ѵ�.\n�ڽ��� ������ ���ٸ� �߼��� ���� ��ó�� ������ �𸣴� ��������� ���Ѵ�.��� �ұ�? ";

        select1 = "�׸� ġ���ϰ� �����ش�."; //��+
        select2 = "�ż��ϰ� �ڸ��� ���."; //����++
        select3 = "���� ������ ��Ż�Ѵ�."; //hp-, ��- ,��+

        result1 = "ġ�Ḧ �ϴ� �߼��� ���������� ������ �����ƴ�. ������ ���縦 ǥ�ϸ� ������ ���� �ָ� ������.";
        result2 = "������ ���� ���� ���� �ʿ�� ����. �ż��ϰ� �ڸ��� ����. ���� ������ �����̴�.";
        result3 = "������ ��Ż�Ϸ��� �߼��� ������ �޾Ҵ�. ������ ���ѱ� ������ ��ó�� �Ծ��� ���� ������ ������ ���� �� ����.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class Block1 :public StoryBlock
{
public:
    Block1()
    {
        script = "�� �ָ� ���ΰ� �ù��� �������ϴ� ����� ���δ�. ���� ������ �ù��� ���� ��ġ�ߴٰ� �����ϴ� ���ϴ�. ��� �ұ�?";

        select1 = "�����ϰ� ��������."; //����+
        select2 = "��ȭ�� �������."; //��+
        select3 = "�ù��� ���� ���ΰ� �ο��."; //hp-, ��+

        result1 = "���� ��� ���� �ʿ�� ����. ������ �߰������� ���� ���� ����.";
        result2 = "��ȭ�� ������ ���� �ù��� ���� ��ã�Ҵ�. ���� ���� �ö���.";
        result3 = "���ΰ� �ο� �̰� ���� ��ã�� �� �־���. �λ��� ���� �Ծ����� ��ʱ��� �޾Ҵ�.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class Block2 :public StoryBlock
{
public:
    Block2()
    {
        script = "�����鿡�� ������ ���ߴ�! �������� ���� �ǳ׸� ���� �����ְڴٰ� �Ѵ�. ��� �ұ�?";

        select1 = "�¼� �ο��."; //hp-, ��+, ����+
        select2 = "���� �ǳ��ش�."; //��-
        select3 = "��������."; //hp-, ����+
        
        result1 = "���� �λ��� �Ծ����� �������� �����ƴ�. �׵��� ������ �ִ� ���� ������ �����.";
        result2 = "";
        result3 = "�ణ�� ���ظ� �Ծ����� ������ �����ƴ�. ���� ������ �����̴�.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class Block3 :public StoryBlock
{
public:
    Block3()
    {
        script = "��Ʋ�Ÿ��� û���� ������. �״� �񵵴����� ���뿡�� ������ �������� ���� ���̶� �Ѵ�. �״� �����ְ� ���� ��� �������ϴ�. ��� �ұ�?";

        select1 = "��� ��Ż�Ѵ�."; //hp+, ��+, ��-
        select2 = "�ణ�� ���� �Բ� �ݷ��� �ǳٴ�."; //��-, ����+
        select3 = "�׸� �ٵ��̸� �������ش�."; //��ȭ ����

        result1 = "���� ��� ���������� �׸� ���̰� ���Ҵ�. ���� ��� ���� ȸ���� �� �־��� �� ��������. ������ ���� ������ ������ ���� �Ͱ���.";
        result2 = "";
        result3 = "���� ������ �������־���. ������ �װ� ������ ���⿡ ���ư� �� �ֱ⸦.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class Block4 :public StoryBlock
{
public:
    Block4()
    {
        script = "�������ִ� ������ ����ó�� �߰��ߴ�! ����� ����ǰ���� ���δ�. ��� �ұ�?"; //��ũ��Ʈ �ʱ�ȭ

        select1 = "���ɽ��� ����ǰ�� ���ĺ���."; //���� �ɷ¿� ���� ���� ���� �߰�, hp-
        select2 = "������ ��ġ�� ����ϰ� ������."; //����+
        select3 = "�������� �����Ѵ�."; //hp-

        result1 = "������ ���Կ� ������ ��ġ�µ� �����ߴ�. �� ���� ���� ���� �� ���� �� ����.";
        result2 = "������ ���ο� ������ ����ߴ�. �������� �þ���.";
        result3 = "���󺸴� �������� ���Ҵ�. ����� ���ظ� �Ծ���.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class Block5 :public StoryBlock
{
public:
    Block5()
    {
        script = "�� ���׳װ� �濡 ���ִ�. �� ���׳״� �ڽ��� ���������� ���纸��� �Ѵ�.\n�ű��� �ָӴϿ� ������ �Ѱ� ������ ������ �ΰ��� �ǰ�, �״����� 4���� �ȴ�. �� �ָӴϰ� ����������� 60���� �ɷȴٸ�, ó���� ������ �ΰ��� ������ �� �ָӴϰ� �� ������� ��ĥ�� �ɸ���?"; //��ũ��Ʈ �ʱ�ȭ

        select1 = "60��";
        select2 = "59��";
        select3 = "30��";

        result1 = "Ʋ�ȳ�! ������ �� �� �����ž߰ڱ���! �� ���� ����� ���׳״� �������.";
        result2 = "";
        result3 = "Ʋ�ȳ�! ������ �� �� �����ž߰ڱ���! �� ���� ����� ���׳״� �������.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class Block6 :public StoryBlock
{
public:
    Block6()
    {
        script = "�� ���׳װ� �濡 ���ִ�. �� ���׳״� �ڽ��� ���������� ���纸��� �Ѵ�.\n���ķ��� �پ ���㰡 �ִ�. ����� �Ѵ޿� �ѹ��� ������ ������ �ѹ��� 10������ ���´ٰ� �Ѵ�. �� �¾ ������ ���� 2���� ���� ������ ���´�. ���� �� �¾ ���� �Ѹ����� Ű��� �����ߴٸ�, 4���� �ڿ��� �� ������ �Ǿ�������?"; //��ũ��Ʈ �ʱ�ȭ

        select1 = "131����";
        select2 = "31����";
        select3 = "1����";

        result1 = "Ʋ�ȳ�! ������ �� �� �����ž߰ڱ���! �� ���� ����� ���׳״� �������.";
        result2 = "Ʋ�ȳ�! ������ �� �� �����ž߰ڱ���! �� ���� ����� ���׳״� �������.";
        result3 = "";
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class Block7 :public StoryBlock
{
public:
    Block7()
    {
        script = "�� ���׳װ� �濡 ���ִ�. �� ���׳״� �ڽ��� ���������� ���纸��� �Ѵ�.\n�к� 10���� Ű�� å�� �д� ���ڰ� �ִ�. �����ִ� â������ �ٶ��� �Ҿ�� 2���� �к��� ������, ���� �Ǵٽ� �ٶ��� �Ҿ�� �к� 4���� ��Ʈ�ȴ�. ���� ���ڴ� â���� �ݰ� ���� û�ߴµ�, �׷��� ������ ��ħ�� �ʰ� �� ���� ����������?"; //��ũ��Ʈ �ʱ�ȭ

        select1 = "10��";
        select2 = "6��";
        select3 = "4��";

        result1 = "Ʋ�ȳ�! ������ ���� �� �����ž߰ڱ�. �̶�� ���ϸ� ���׳״� �������.";
        result2 = "";
        result3 = "Ʋ�ȳ�! ������ ���� �� �����ž߰ڱ�. �̶�� ���ϸ� ���׳״� �������.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class Block8 :public StoryBlock
{
public:
    Block8()
    {
        script = "�����ϼ�! �Ӹ��� ������. �������� ������ �ְڳ�. ������ ���ϴ°�?"; //��ũ��Ʈ �ʱ�ȭ

        select1 = "��"; //��+
        select2 = "�ǰ�"; //hp+, ��+
        select3 = "����"; //����+

        result1 = "���׳״� ���� �ְ� ������.";
        result2 = "���׳״� ���� ������ �ǳ޴�. ������ ���ô� ��ó�� ���� ������ ������ ���.";
        result3 = "���׳״� �Ķ� ������ �ǳ޴�. ������ ���ô� �Ӹ� ȸ���� ������ ������ ���.";
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class Block9 :public StoryBlock
{
public:
    Block9()
    {
        script = "������ ��������� ������! ������ �������� �;����� ��������� ���߶� ���� �Ǵ�. ��� �ұ�?"; //��ũ��Ʈ �ʱ�ȭ

        select1 = "Ȳ���� ����ģ��."; //����+
        select2 = "���� ������ �ڵ��� ����."; //��+ 
        select3 = "�׵��� �����Ѵ�."; //hp-, ����+

        result1 = "������ ���ΰ� ����ĥ ������ ����. Ȳ���� �ڸ��� ����. �޸��Ⱑ ������ �����̴�."; 
        result2 = "�׵��� ���� �ָ� �긮�� ����� ���ش�. �� ���� �ƴϿ����� �ް� ������ �Ѿ��.";
        result3 = "�����ϰ� �޾Ƴ���. ���ݰ������� �ణ�� �λ��� �Ծ����� ���� ������ �����̴�.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class Block10 :public StoryBlock
{
public:
    Block10()
    {
        script = "������ �ǹ��� ���� ������ �߰��ߴ�. ���� ����� �ڽ��� �Ĺ����ڶ� �Ұ��ϸ� �� ������ �޶�� �Ѵ�. ��� �ұ�?"; //��ũ��Ʈ �ʱ�ȭ

        select1 = "��� ������ �� ������ ì���."; //hp-
        select2 = "�׿��� ������ �ѱ��."; //��+
        select3 = "������ ���״� ������ ���� �˷��޶�� �Ѵ�."; //����+

        result1 = "�׸� ���Ѱ� ������ ���ڸ��� ���� ������ ��������. �ƹ����� �͵������� ���� �� ����.";
        result2 = "���� ����� ���� �ְ� �ɼ��ϰ� ������ ä���ذ���.";
        result3 = "�״� �� ������ ���� ���������� �˷��ְ� �پ��� ������ �˷����. ������ �þ���.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class Block11 :public StoryBlock
{
public:
    Block11()
    {
        script = "�Ǵ��а� �ùε��� ������ ���Ѱ� �ִ�. �Ǵ����� �������� ������ ��ĥ �� ���� �� ����. ��� �ұ�?"; //��ũ��Ʈ �ʱ�ȭ

        select1 = "�Ǵ��� ������ ������ ��ã�� �ش�."; //��+
        select2 = "������ ���� ���ο��� �ѱ��."; //��+
        select3 = "�Ǵ����� ������ ��������."; //����+

        result1 = "������� ���� ���縦 ǥ�Ѵ�. ������ ��������.";
        result2 = "���� ���� �� �� �־���. ���� ���� �����.";
        result3 = "������ ������ �����. ������ �þ���.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class Block12 :public StoryBlock
{
public:
    Block12()
    {
        script = "������� ������. � �ɼ�! \"1�� 1��ǰ ���Ÿ� �����մϴ�. ������ ��󺸼���! ��� 100���Դϴ�.\""; //��ũ��Ʈ �ʱ�ȭ

        select1 = "������ ������ å�� ���.";
        select2 = "ȿ���� �� �� ���� ������ ���."; 
        select3 = "���� �� ������ ����̴� �׳� ����."; //none

        result1 = "";
        result2 = "";
        result3 = "�� ������ ���� �ð��� ������ �߰����� �����ߴ�.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class Block13 :public StoryBlock
{
public:
    Block13()
    {
        script = "�Ǹ��� �� �տ� ��Ÿ�� ������ �ŷ��� �����Ѵ�. ��� �ұ�?"; //��ũ��Ʈ �ʱ�ȭ

        select1 = "���� �޶�� �Ѵ�."; //��+, ��-
        select2 = "������ �޶�� �Ѵ�."; //����+, ��-
        select3 = "�����Ѵ�."; //��+

        result1 = "���� �����. �Ǹ��� �ŷ��� ������ �� ������ �� ����."; //ī������ +
        result2 = "������ �����. �Ǹ��� �ŷ��� ������ �� ������ �� ����.";//�� 300
        result3 = "�ڿ��� �Ǹ��� ������� �Ҹ��� �鸰��. �Ǹ��� ��� ���� �ö󰬴�."; //������ 2+ 

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class Block14 :public StoryBlock
{
public:
    Block14()
    {
        script = "�� �� ���� ���ڰ� �氡�� �������ִ�. ��� �ұ�?"; //��ũ��Ʈ �ʱ�ȭ

        select1 = "�����.";
        select2 = "�����Ѵ�."; //none
    
        result1 = "";
        result2 = "������ �����ϰ� ���� ��� �ʿ�� ���� �� ����.";
        result3 = "";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class Block15 :public StoryBlock
{
public:
    Block15()
    {
        script = "�ҿ��� �̷��ִ� �����̴�. ������ ������� ���� ������ ���ƺ��δ�. ��� �ұ�?"; //��ũ��Ʈ �ʱ�ȭ

        select1 = "���� �������� �ش޶�� �ҿ��� ���."; //��-, hp+, ��+, ����+
        select2 = "�ӹ��� ������ �� �ְ� �ش޶�� �ҿ��� ���."; //��-, ����+, ��+
        select3 = "������ �ִ� ������ ì���."; //��+

        result1 = ""; //ī������ +
        result2 = "";
        result3 = "�ҿ����� �� ���� �ʴ´�. �Ǹ������� ���� ì���.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class BlockChoiceStat :public StoryBlock
{
public:
    BlockChoiceStat()
    {
        script = "������ �����ϱ����� ����Կ�. ����� �����ΰ���?"; //��ũ��Ʈ �ʱ�ȭ

        select1 = "���� �پ �����Դϴ�."; //��+, ������++
        select2 = "���� ����� �����Դϴ�."; //hp+, ��+, ����+
        select3 = "���� ������ ����Դϴ�."; //��+

        result1 = "�ǰ������� ������ ���. ��ü�ɷ��� �ö� �����̴�."; //ī������ +
        result2 = "�� �� �ִٴ� �ڽŰ��� ��������. �����ϰ� ������ ����Ѵ�.";
        result3 = "�ҿ����� �� ���� �ʴ´�. �Ǹ������� ���� ì���.";

    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class BlockStoryStart :public StoryBlock
{
public:
    BlockStoryStart()
    {
        script = "����� ����� ���̰� ���� ���� ����� ��Ȱ�� ���� ���� �ֽ��ϴ�.\n����� ������ ��̸� ��ġæ ������ ����� ���� ���� �������� �� ���￡ ���� ������ ������ ����߽��ϴ�.\n����� ����� ������ ������ �����ϴ�."; //��ũ��Ʈ �ʱ�ȭ
    
        result1 = "";
        result2 = "";
        result3 = "";
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class BlockMainStory :public StoryBlock
{
public:
    BlockMainStory()
    {
        script = "���� ������ �����ߴ�. ���� ���� ���￡ ���� ������ ���� �� ������?"; //��ũ��Ʈ �ʱ�ȭ

        select1 = "������ ������.";
        select2 = "�Ͻ������� ������.";
        
        result1 = "";
        result2 = "";
        result3 = "";
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class BlockMainStoryCastle :public StoryBlock
{
public:
    BlockMainStoryCastle()
    {
        script = "�� ���� ��ó�� �������� ��񺴵��� ���δ�. ���� ���� �ұ�?"; //��ũ��Ʈ �ʱ�ȭ

        select1 = "�������� ����.";
        select2 = "�������� ã�ƺ���."; 
        
        result1 = "";
        result2 = "";
        result3 = "";
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class BlockMainStoryCastleDoor :public StoryBlock
{
public:
    BlockMainStoryCastleDoor()
    {
        script = "������ ���� ��񺴵��� ���δ�."; //��ũ��Ʈ �ʱ�ȭ
        
        result1 = "";
        result2 = "";
        result3 = "";
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class BlockMainStoryCastleHole :public StoryBlock
{
public:
    BlockMainStoryCastleHole()
    {
        script = "���� �ѹ������� ������ �������� ã�Ҵ�."; //��ũ��Ʈ �ʱ�ȭ
        
        result1 = "";
        result2 = "";
        result3 = "";
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class BlockMainStoryFinal :public StoryBlock
{
public:
    BlockMainStoryFinal()
    {
        script = "������ ã�Ҵ�! ���� ������ ���ư���!"; //��ũ��Ʈ �ʱ�ȭ
        
        result1 = "";
        result2 = "";
        result3 = "";
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class BlockMainStoryMarket :public StoryBlock
{
public:
    BlockMainStoryMarket()
    {
        script = "�Ͻ��������� �������� Ȱ������ �ò������� �������̴�. ������ ã�ƺ���."; //��ũ��Ʈ �ʱ�ȭ
        
        result1 = "";
        result2 = "";
        result3 = "";
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class BlockEndingVictory :public StoryBlock
{
public:
    BlockEndingVictory()
    {
        script = "����� ���� ������ ���������� ������ ����� �����߽��ϴ�!\n����� ���� �ο� ���� ����� ����� �̸��� �������� ���� ���Դϴ�."; //��ũ��Ʈ �ʱ�ȭ
    
        result1 = "";
        result2 = "";
        result3 = "";
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class BlockEndingDefeat :public StoryBlock
{
public:
    BlockEndingDefeat()
    {
        script = "����� ������ �������� ������ ���� ���������ϴ�! �߸��� ������ ������ �غ��� ������ ���￡�� �й��߰�,\n������� ��ſ��� å���� ���� ���������� ����� ������ ������ ������ �������Ǿ����ϴ�."; //��ũ��Ʈ �ʱ�ȭ
    
        result1 = "";
        result2 = "";
        result3 = "";
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};

class BlockEndingDie :public StoryBlock
{
public:
    BlockEndingDie()
    {
        script = "hp�� ��� ��ҽ��ϴ�!\n����� ������ ��������ΰ�������...."; //��ũ��Ʈ �ʱ�ȭ
    
        result1 = "";
        result2 = "";
        result3 = "";
    }
    virtual void storyBlockFunction(Player& player, StoryQueue* queue); //�÷��̾� ��ü ������ �� ���� ����
};
