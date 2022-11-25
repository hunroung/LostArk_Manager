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
		int legend_count = 0;
		int hero_count = 0;
		int rare_count = 0;
		int advanced_count = 0;
		int nomal_count = 0;
		int count = 0;
		int legend1 = 0, legend2 = 0, legend3 = 0, legend4 = 0, legend5 = 0, legend6 = 0, legend7 = 0, legend8 = 0, legend9 = 0, legend10 = 0, legend11 = 0, legend12 = 0, legend13 = 0, legend14 = 0, legend15 = 0, legend16 = 0, legend17 = 0, legend18 = 0, legend19 = 0;

		Cardsimulator() {
			srand((unsigned int)time(NULL));
		}
		void legend_hero() //Àü¿µÆÑ
		{
			result = "";

			int num = rand() % 10;
			if (num < 2) {
				result = legend;
				legend_count++;
			}
			else {
				result = hero;
				hero_count++;
			}
		}
		void legend_rare() //ÀüÈñÆÑ
		{
			int num = rand() % 100;
			if (num < 4) {
				result = legend;
				legend_count++;
			}
			else if (num >= 4 && num < 20) {
				result = hero;
				hero_count++;
			}
			else {
				result = rare;
				rare_count++;
			}
		}
		void legend_advanced()//Àü°íÆÑ
		{
			int num = rand() % 1000;
			if (num < 25) {
				result = legend;
				legend_count++;
			}
			else if(num >= 25 && num < 200) {
				result = hero;
				hero_count++;
			}
			else if (num >= 200 && num < 600) {
				result = rare;
				rare_count++;
			}
			else {
				result = advanced;
				advanced_count++;
			}
		}
		void legend_nomal()//ÀüÃ¼ÆÑ
		{
			int num = rand() % 1000;
			if (num < 5) {
				result = legend;
				legend_count++;
			}
			else if (num >= 5 && num < 100) {
				result = hero;
				hero_count++;
			}
			else if (num >= 100 && num < 500) {
				result = rare;
				rare_count++;
			}
			else if (num >= 500 && num < 800) {
				result = advanced;
				advanced_count++;
			}
			else {
				result = nomal;
				nomal_count++;
			}
		}
		int legend_card()
		{
			int num = rand() % 19;
			switch (num) {
			case 0:
				legend1++;
				break;
			case 1:
				legend2++;
				break;
			case 2:
				legend3++;
				break;
			case 3:
				legend4++;
				break;
			case 4:
				legend5++;
				break;
			case 5:
				legend6++;
				break;
			case 6:
				legend7++;
				break;
			case 7:
				legend8++;
				break;
			case 8:
				legend9++;
				break;
			case 9:
				legend10++;
				break;
			case 10:
				legend11++;
				break;
			case 11:
				legend12++;
				break;
			case 12:
				legend13++;
				break;
			case 13:
				legend14++;
				break;
			case 14:
				legend15++;
				break;
			case 15:
				legend16++;
				break;
			case 16:
				legend17++;
				break;
			case 17:
				legend18++;
				break;
			case 18:
				legend19++;
				break;
			}
			return num;
		}
	};
}