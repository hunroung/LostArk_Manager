
#include "Gackin.h"

#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <process.h>

int main (void){
    char nn[] = "광전사의 비기";
    Gackin_info test_2(nn);
    std::cout << test_2.p_gackin(0, 0);
    return 0;
}