#include "Gackin.h"
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <filesystem>

#define MAX_NAME_LENGTH 30
void mkfile(char* name) {
    char path[50] = ".\\character_info_scriper.exe ";
    strcat_s(path, name);
    std::system(path);
}
Char_info::Char_info(char* user_name)
{
    char filename[100] = "character_info_";
    strcat_s(filename, user_name);
    strcat_s(filename, ".txt");
    std::ifstream fp;
    fp.open(filename);
    if (fp.fail()) {
        mkfile(user_name);
        fp.open(filename);
    }


    if (fp.fail()) {
        std::cerr << "파일을 찾을 수 없음 error" << std::endl;
        exit(1);
    }
    char ch[] = "";
    
    fp.getline(job, 20);
    if (strcmp(job, ch) == 0) {
        std::cerr << "파일을 찾을 수 없음 error" << std::endl;
        errorcode = 1;
        return;
    }
    fp >> total_char_count;
    char oneC[MAX_NAME_LENGTH] = { '\n' };
    int chcount = 0;
    fp.getline(oneC, MAX_NAME_LENGTH);
    std::string nn(user_name);
    while (chcount < total_char_count && chcount < 24 && !fp.eof())
    {
        fp.getline(oneC, MAX_NAME_LENGTH);
        std::string s(oneC);
        if (nn.compare(s) == 0) {
            chcount = total_char_count - 1;
        }

        if (strcmp(oneC, ch) == 0) {
            errorcode = 1;
            return;
        }
        if (oneC[0] == '@')
        {

            for (int i = 0; i < MAX_JOB_LENGTH; i++)
            {
                server[servercount][i] = oneC[i];
            }
            servercount++;


        }
        else
        {
            for (int i = 0; i < MAX_NAME_LENGTH; i++)
            {
                name[chcount][i] = oneC[i];
            }
            server_char_count[servercount]++;
            chcount++;

        }
    }
    if (fp.eof()) {
        errorcode = 1;
        fp.close();
        return;
    }
    fp.getline(main_char, MAX_NAME_LENGTH);

    fp.getline(itemlevel, MAX_ITEM_LENGTH);

    fp >> damage;
    fp >> hp;
    fp >> critical;
    fp >> specialization;
    fp >> swiftness;
    fp >> domination;
    fp >> endurance;
    fp >> expertise;
    fp.getline(oneC, 20);
    if (strcmp(oneC, ch) == 0) {
        fp.getline(level, 20);
    }
    else {
        strcpy(level, oneC);
    }
    
    gackin_count = 0;
    while (!fp.eof()) {
        fp.getline(gackin_name[gackin_count],MAX_NAME_LENGTH);
        gackin_count++;
    }
    fp.close();
}



Gackin_info::Gackin_info(char* job_gackin) {

    char filename[100] = ".\\job\\";
    strcat_s(filename, job_gackin);
    strcat_s(filename, ".txt");
    std::ifstream fp;
    std::cout << filename << std::endl;
    fp.open(filename);
    if (fp.fail()) {
        std::cerr << "파일을 찾을 수 없음 error" << std::endl;
        exit(1);
    }
    int i = 0;
    char user[10][50];
    while (!fp.eof() || i < 10) {
        fp >> user[i];
        std::cout << user[i] << std::endl;
        i++;
    }
    fp.close();

    i = 0;
    while (i < 10) {
        char path[100] = ".\\job\\user\\gackin_info_scriper.exe ";
        strcat_s(path, user[i]);
        std::system(path);
        i++;
    }
}