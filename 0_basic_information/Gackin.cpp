#include "Gackin.h"
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 30
Char_info::Char_info(char *user_name) {
    char *filename = "character_info";
    strcat(filename, user_name);
    strcat(filename, ".txt");
    ifstream fp;
    fp.open(filename);
    if (fp.fail()) {
        cerr << "파일을 찾을 수 없음" << endl;
        exit(1);
    }
    fp.getline(job);
    fp >> total_char_count;
    fp.getline(server[0]);
    char oneC[MAX_NAME_LENGTH] = {0};
    int servercount = 0;
    int chcount = 0;
    while (chcount != total_char_count) {
        fp.getline(oneC);
        if (oneC[0] == '@' && oneC[1] != server[0][1]) {
            servercount++;
            for (int i = 0; i < MAX_JOB_LENGTH; i++) {
                server[servercount][i] = oneC[i];
            }
        } else {
            for (int i = 0; i < MAX_NAME_LENGTH; i++) {
                name[chcount][i] = oneC[i];
            }
            chcount++;
        }
    }
    fp.getline(itemlevel);
    fp >> damage;
    fp >> hp;
    fp >> critical;
    fp >> specialization;
    fp >> swiftness;
    fp >> domination;
    fp >> endurance;
    fp >> expertise;
    fp.getline(level);
    gackin.gackin_count = 0;
    while (!fp.eof()) {
        fp.getline(gackin.gackin_name[gackin.gackin_count]);
        gackin.gackin_count++;
    }
}
