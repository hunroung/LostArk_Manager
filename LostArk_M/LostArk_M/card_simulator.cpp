#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <string>
using namespace std;

//전영팩 : 전카 2 영웅 8
//전희팩 : 전카 4 영웅 16 희귀 80
//전체 : 전카 5 영웅 95 희귀 400 고급 300 일반 200
//전설 팩 : 19개 중 랜덤

class Card
{
public:
	string legend = "전설 카드 팩 II";
	string abyss_legend = "심연의 전설 카드 팩";
	string hero = "영웅 카드 팩";
	string rare = "희귀 카드 팩";
	string advanced = "고급 카드 팩";
	string nomal = "일반 카드 팩";
	string result = "";
	string legend_list[] = {
		"아만","실리안","국왕 실리안","샨디","진저웨일","데런 아만","웨이","일리아칸","카마인","베아트리스","아제나&이난나","바훈투르","가디언 루","에스더 루테란","에스더 시엔","에스더 갈라투르","니나브","광기를 잃은 쿠크세이튼","카단"
	};
	string abyss_list[] = {
		"웨이","실리안","바훈투르","니나브","아제나&이난나","샨디","카단","에스더 시엔","베아트리스","일리아칸","에스더 갈라투르","광기를 잃은 쿠크세이튼","에스더 루테란","진저웨일","마수군단장 발탄","광기군단장 쿠크세이튼","욕망군단장 비아키스","카멘","아브렐슈드"
	};
	void legend_hero() //전영팩
	{
		srand((unsigned int)time(NULL));
		int num = rand() % 10;
		if (num < 2)
			result = legend;
		else
			result = hero;
	}
	void legend_rare() //전희팩
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
	void legend_nomal()//전체팩
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