#include <ctime>
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace System;

namespace Card {
	public ref class Cardsimulator
	{
	public:
		String^ legend = "Àü¼³ Ä«µå ÆÑ II";
		String^ abyss_legend = "½É¿¬ÀÇ Àü¼³ Ä«µå ÆÑ";
		String^ hero = "¿µ¿õ Ä«µå ÆÑ";
		String^ rare = "Èñ±Í Ä«µå ÆÑ";
		String^ advanced = "°í±Þ Ä«µå ÆÑ";
		String^ nomal = "ÀÏ¹Ý Ä«µå ÆÑ";
		String^ result = "";
		Cardsimulator() {
			srand((unsigned int)time(NULL));
		}
		void legend_hero() //Àü¿µÆÑ
		{
			result = "";

			int num = rand() % 10;
			if (num < 2)
				result = legend;
			else
				result = hero;
		}
		void legend_rare() //ÀüÈñÆÑ
		{
			int num = rand() % 100;
			if (num < 4)
				result = legend;
			else if (num >= 4 && num < 20)
				result = hero;
			else
				result = rare;
		}
		void legend_nomal()//ÀüÃ¼ÆÑ
		{
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
			int num = rand() % 20;
			//result = legend_list[num];
		}
		void abyss_card()
		{
			int num = rand() % 20;
			//result = abyss_list[num];
		}
	};
}