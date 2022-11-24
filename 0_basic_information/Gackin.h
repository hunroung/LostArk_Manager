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
    static const int MAX_JOB_LENGTH = 15;      //직업 이름 최대 길이
    static const int MAX_identify_LENGTH = 30; //클래스 이름 최대 길이
    static const int MAX_NAME_LENGTH = 30;     //캐릭터 이름 최대 길이
    static const int MAX_CHAR_LENGTH = 24;     //캐릭터 최대 개수
    static const int MAX_SERVER_COUNT = 8;     //서버 최대 개수
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
    char job[MAX_JOB_LENGTH];                      //직업
    int total_char_count;                          //캐릭터 수
    char server[MAX_SERVER_COUNT][MAX_JOB_LENGTH]; //서버 이름
    int server_char_count[MAX_CHAR_LENGTH] = { 0 };       //서버 캐릭터 수
    char name[MAX_CHAR_LENGTH][MAX_NAME_LENGTH];   //이름
    char main_char[MAX_NAME_LENGTH];               //메인 캐릭터
    char itemlevel[MAX_ITEM_LENGTH];               //아이템레벨
    int damage;                                    //공격력
    int hp;                                        //생명력
    int critical;                                  //치명
    int specialization;                            //특화
    int swiftness;                                 //신속
    int domination;                                //제압
    int endurance;                                 //인내
    int expertise;                                 //숙련
    char level[MAX_NAME_LENGTH];                   //레벨
    char gackin_name[8][MAX_NAME_LENGTH];                            //각인정보
    int gackin_count = 0;
    int servercount = 0;
};

class Gackin_info {
  public:
    Gackin_info(char * job_gackin);
    static const int MAX_NAME_LENGTH = 30; //각인 최대 개수
    int gackin_count = 0;                  //각인 개수
    int gackin_level;                      //각인 레벨 (최대 15)
    char gackin_name[8][MAX_NAME_LENGTH];  //각인 이름
};


class Gungdangjang {
  public:
    static const int MAX_NAME_LENGTH = 20; //이름 최대값

  private:
    char name[MAX_NAME_LENGTH];       //이름
    char difficulty[MAX_NAME_LENGTH]; //난이도
};

void mkfile(char* name);