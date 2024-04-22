#include "pnc_map.h"
#include "process.h"
#include <iostream>
using namespace std;



int main(){
    cout << "planning start" << endl;
    Process pro;
    pro.planProcess();
    cout << "planning end" << endl;

    return 0;
}