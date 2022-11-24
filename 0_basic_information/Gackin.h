#include <stdio.h>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <process.h>
// LostArk character class
class Char_info {
  public:
    static const int MAX_JOB_LENGTH = 15;      //���� �̸� �ִ� ����
    static const int MAX_identify_LENGTH = 30; //Ŭ���� �̸� �ִ� ����
    static const int MAX_NAME_LENGTH = 30;     //ĳ���� �̸� �ִ� ����
    static const int MAX_CHAR_LENGTH = 24;     //ĳ���� �ִ� ����
    static const int MAX_SERVER_COUNT = 8;     //���� �ִ� ����
    static const int MAX_ITEM_LENGTH = 30;
    Char_info(char *user_name);
    char* p_main_name() { return main_char; }
    char* p_all_name() { return (char*)name; }
    char* p_job() { return job; }
    char* p_main_server() { return server[0]; }
    char* p_item_level() { return itemlevel; }
    int p_damage() { return damage; }
    int p_hp() { return hp; }
    int p_critical() { return critical; }
    int p_specialization() { return specialization; }
    int p_swiftness() { return swiftness; }
    int p_domination() { return domination; }
    int p_endurance() { return endurance; }
    int p_expertise() { return expertise; }
    char* p_level() { return level; }
    char* p_gackin_name() { return (char*)gackin_name; }
  private:
    char job[MAX_JOB_LENGTH];                      //����
    int total_char_count;                          //ĳ���� ��
    char server[MAX_SERVER_COUNT][MAX_JOB_LENGTH]; //���� �̸�
    int server_char_count[MAX_CHAR_LENGTH] = { 0 };       //���� ĳ���� ��
    char name[MAX_CHAR_LENGTH][MAX_NAME_LENGTH];   //�̸�
    char main_char[MAX_NAME_LENGTH];               //���� ĳ����
    char itemlevel[MAX_ITEM_LENGTH];               //�����۷���
    int damage;                                    //���ݷ�
    int hp;                                        //�����
    int critical;                                  //ġ��
    int specialization;                            //Ưȭ
    int swiftness;                                 //�ż�
    int domination;                                //����
    int endurance;                                 //�γ�
    int expertise;                                 //����
    char level[MAX_NAME_LENGTH];                   //����
    char gackin_name[8][MAX_NAME_LENGTH];                            //��������
    int gackin_count = 0;
    int servercount = 0;
};

class Gackin_info {
  public:
    Gackin_info(char * job_gackin);
    static const int MAX_NAME_LENGTH = 30; //���� �ִ� ����
    int gackin_count = 0;                  //���� ����
    int gackin_level;                      //���� ���� (�ִ� 15)
    char gackin_name[8][MAX_NAME_LENGTH];  //���� �̸�
};


class Gungdangjang {
  public:
    static const int MAX_NAME_LENGTH = 20; //�̸� �ִ밪

  private:
    char name[MAX_NAME_LENGTH];       //�̸�
    char difficulty[MAX_NAME_LENGTH]; //���̵�
};

void mkfile(char* name);