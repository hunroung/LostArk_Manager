#include <stdio.h>
#include <iostream>
#include <sstream>
#include <cctype>
#include <string>
#include <stdlib.h>

using namespace System;

namespace Cal {
	public ref class Auction
	{
	public:
		double price; //가격
		int num; //공대원 수
		int min_benefit; //분배금 대비 최소 이득금

		int commission;
		
		int equal_price;
		int equal_distribution;
		int benefit_price;
		int benefit;
		int max_price;
		//int min_benefit;
		

		/*
		int commission = price * 0.05; //수수료

		int equal_price = Equal_distribution(price, num); //동일 분배 입찰가
		int equal_distribution = equal_price / (num - 1); //동일 분배금

		int benefit_price = Benefit_distribution(price, num); //선빵 입찰가
		int benefit_distribution = benefit_price / (num - 1); //분배금
		int benefit = (price * 0.95 - benefit_price) - benefit_distribution;

		int max_price = Min_benefit(price, num, min_benefit); //최소 이득 입찰가
		*/

		//동일 분배
		double Equal_distribution(double price, int num)
		{
			double bid_price;
			bid_price = price * 0.95 * (num - 1) / num;
			return bid_price;
		}

		//선빵 입찰 (상대방 입찰 시 동일 분배가 되는 가격)
		double Benefit_distribution(double price, int num)
		{

			double bid_price;
			bid_price = price * 0.95 * (num - 1) / (num * 1.1);

			return bid_price;
		}

		//최소 이득 계산
		double Min_benefit(double price, int num, int benefit)
		{
			double bid_price;
			bid_price = (price * 0.95 - benefit) * (num - 1) / num;

			return bid_price;
		}

		void AllCal() {
			commission = price * 0.05; //수수료

			equal_price = Equal_distribution(price, num); //동일 분배 입찰가
			equal_distribution = equal_price / (num - 1); //동일 분배금

			benefit_price = Benefit_distribution(price, num); //선빵 입찰가
			benefit = (price * 0.95 - benefit_price) - benefit_price/(num-1);

			max_price = Min_benefit(price, num, min_benefit); //최소 이득 입찰가
		}

		void MarshalString(String^ s, std::string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

		void MarshalString(String^ s, std::wstring& os) {
			using namespace Runtime::InteropServices;
			const wchar_t* chars =
				(const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
		
	};
}
//가격 적는 칸, 초기화 버튼, 인원 수 적는 칸, 4인, 8인 선택 버튼, 최소 이득 적는 칸, 초기화