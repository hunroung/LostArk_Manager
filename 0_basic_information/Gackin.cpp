<<<<<<< HEAD
#include "Gackin.h"
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <filesystem>

#define MAX_NAME_LENGTH 30
Char_info::Char_info(char *user_name) {
    char filename[100] = "character_info_";
    strcat_s(filename, user_name);
    strcat_s(filename, ".txt");
    std::ifstream fp;
    fp.open(filename);
    if (fp.fail()) {
        std::cerr << "파일을 찾을 수 없음 error" << std::endl;
        exit(1);
    }

    fp.getline(job,20);
    fp >> total_char_count;
    fp.getline(server[0],20);
    char oneC[MAX_NAME_LENGTH] = {'\n'};
    int chcount = 0;
    while (chcount != total_char_count) 
    {
        fp.getline(oneC,20);
        if (oneC[0] == '@' ) 
        {
            servercount++;
            for (int i = 0; i < MAX_JOB_LENGTH; i++) 
            {
                server[servercount][i] = oneC[i];
            }
            
            
        } else 
        {
            for (int i = 0; i < MAX_NAME_LENGTH; i++)
            {
                name[chcount][i] = oneC[i];
            }
            server_char_count[servercount]++;
            chcount++;

        }
    }
    
    fp.getline(main_char, MAX_NAME_LENGTH);
    
    fp.getline(itemlevel,MAX_ITEM_LENGTH);
    
    fp >> damage;
    fp >> hp;
    fp >> critical;
    fp >> specialization;
    fp >> swiftness;
    fp >> domination;
    fp >> endurance;
    fp >> expertise;
    fp.getline(level,20);
    gackin_count = 0;
    while (!fp.eof()) {
        fp.getline(gackin_name[gackin_count],MAX_NAME_LENGTH);
        gackin_count++;
    }
    fp.close();
}

void mkfile(char* name) {
    char path[50] = ".\\character_info_scriper.exe ";
    strcat_s(path, name);
    std::system(path);
    return;
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
    while (!fp.eof()||i<10) {
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
    
=======
#include "Gackin.h"
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <filesystem>

#define MAX_NAME_LENGTH 30
Char_info::Char_info(char *user_name) {
    char filename[100] = "character_info_";
    strcat_s(filename, user_name);
    strcat_s(filename, ".txt");
    std::ifstream fp;
    fp.open(filename);
    if (fp.fail()) {
        std::cerr << "파일을 찾을 수 없음 error" << std::endl;
        exit(1);
    }

    fp.getline(job,20);
    fp >> total_char_count;
    fp.getline(server[0],20);
    char oneC[MAX_NAME_LENGTH] = {'\n'};
    int chcount = 0;
    while (chcount != total_char_count) 
    {
        fp.getline(oneC,20);
        if (oneC[0] == '@' ) 
        {
            servercount++;
            for (int i = 0; i < MAX_JOB_LENGTH; i++) 
            {
                server[servercount][i] = oneC[i];
            }
            
            
        } else 
        {
            for (int i = 0; i < MAX_NAME_LENGTH; i++)
            {
                name[chcount][i] = oneC[i];
            }
            server_char_count[servercount]++;
            chcount++;

        }
    }
    
    fp.getline(main_char, MAX_NAME_LENGTH);
    
    fp.getline(itemlevel,MAX_ITEM_LENGTH);
    
    fp >> damage;
    fp >> hp;
    fp >> critical;
    fp >> specialization;
    fp >> swiftness;
    fp >> domination;
    fp >> endurance;
    fp >> expertise;
    fp.getline(level,20);
    gackin_count = 0;
    while (!fp.eof()) {
        fp.getline(gackin_name[gackin_count],MAX_NAME_LENGTH);
        gackin_count++;
    }
    fp.close();
}

void mkfile(char* name) {
    char path[50] = ".\\character_info_scriper.exe ";
    strcat_s(path, name);
    std::system(path);
    return;
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
    while (!fp.eof()||i<10) {
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
    
>>>>>>> d57ac9ea026a4db98a63ceda60b66e7bb06bf5ee
}