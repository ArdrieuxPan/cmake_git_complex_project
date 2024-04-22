#include "pnc_map.h"
#include "process.h"

#include <iostream>
using namespace std;



void Process::planProcess(){
    cout << "this is planning process" << endl;
    this->my_map_.mapInfo();
    cout << "planning success" << endl;
}