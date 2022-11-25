#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <string>
using namespace std;

//������ : ��ī 2 ���� 8
//������ : ��ī 4 ���� 16 ��� 80
//��ü : ��ī 5 ���� 95 ��� 400 ��� 300 �Ϲ� 200
//���� �� : 19�� �� ����

class Card
{
public:
	string legend = "���� ī�� �� II";
	string abyss_legend = "�ɿ��� ���� ī�� ��";
	string hero = "���� ī�� ��";
	string rare = "��� ī�� ��";
	string advanced = "��� ī�� ��";
	string nomal = "�Ϲ� ī�� ��";
	string result = "";
	string legend_list[] = {
		"�Ƹ�","�Ǹ���","���� �Ǹ���","����","��������","���� �Ƹ�","����","�ϸ���ĭ","ī����","����Ʈ����","������&�̳���","��������","����� ��","������ ���׶�","������ �ÿ�","������ ��������","�ϳ���","���⸦ ���� ��ũ����ư","ī��"
	};
	string abyss_list[] = {
		"����","�Ǹ���","��������","�ϳ���","������&�̳���","����","ī��","������ �ÿ�","����Ʈ����","�ϸ���ĭ","������ ��������","���⸦ ���� ��ũ����ư","������ ���׶�","��������","���������� ��ź","���ⱺ���� ��ũ����ư","��������� ���Ű��","ī��","�ƺ근����"
	};
	void legend_hero() //������
	{
		srand((unsigned int)time(NULL));
		int num = rand() % 10;
		if (num < 2)
			result = legend;
		else
			result = hero;
	}
	void legend_rare() //������
	{
		srand((unsigned int)time(NULL));
		int num = rand() % 100;
		if (num < 4)
			result = legend;
		else if (num >= 4 && num < 20)
			result = hero;
		else
			result = rare;
	}
	void legend_nomal()//��ü��
	{
		srand((unsigned int)time(NULL));
		int num = rand() % 1000;
		if (num < 5)
			result = legend;
		else if (num >= 5 && num < 100)
			result = hero;
		else if (num >= 100 && num < 500)
			result = rare;
		else if (num >= 500 && num < 800)
			result = advanced;
		else
			result = nomal;
	}
	void legend_card()
	{
		srand((unsigned int)time(NULL));
		int num = rand() % 20;
		result = legend_list[num];
	}
	void abyss_card()
	{
		srand((unsigned int)time(NULL));
		int num = rand() % 20;
		result = abyss_list[num];
	}
};