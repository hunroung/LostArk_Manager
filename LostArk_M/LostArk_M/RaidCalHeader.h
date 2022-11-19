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
		double price; //����
		int num; //����� ��
		int min_benefit; //�й�� ��� �ּ� �̵��

		int commission;
		
		int equal_price;
		int equal_distribution;
		int benefit_price;
		int benefit;
		int max_price;
		//int min_benefit;
		

		/*
		int commission = price * 0.05; //������

		int equal_price = Equal_distribution(price, num); //���� �й� ������
		int equal_distribution = equal_price / (num - 1); //���� �й��

		int benefit_price = Benefit_distribution(price, num); //���� ������
		int benefit_distribution = benefit_price / (num - 1); //�й��
		int benefit = (price * 0.95 - benefit_price) - benefit_distribution;

		int max_price = Min_benefit(price, num, min_benefit); //�ּ� �̵� ������
		*/

		//���� �й�
		double Equal_distribution(double price, int num)
		{
			double bid_price;
			bid_price = price * 0.95 * (num - 1) / num;
			return bid_price;
		}

		//���� ���� (���� ���� �� ���� �й谡 �Ǵ� ����)
		double Benefit_distribution(double price, int num)
		{

			double bid_price;
			bid_price = price * 0.95 * (num - 1) / (num * 1.1);

			return bid_price;
		}

		//�ּ� �̵� ���
		double Min_benefit(double price, int num, int benefit)
		{
			double bid_price;
			bid_price = (price * 0.95 - benefit) * (num - 1) / num;

			return bid_price;
		}

		void AllCal() {
			commission = price * 0.05; //������

			equal_price = Equal_distribution(price, num); //���� �й� ������
			equal_distribution = equal_price / (num - 1); //���� �й��

			benefit_price = Benefit_distribution(price, num); //���� ������
			benefit = (price * 0.95 - benefit_price) - benefit_price/(num-1);

			max_price = Min_benefit(price, num, min_benefit); //�ּ� �̵� ������
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
//���� ���� ĭ, �ʱ�ȭ ��ư, �ο� �� ���� ĭ, 4��, 8�� ���� ��ư, �ּ� �̵� ���� ĭ, �ʱ�ȭ