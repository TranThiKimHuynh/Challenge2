#include <iostream>
#include <string>
#include <cstring>
#include <map>
#include <chrono>
#include <fstream>
#include <time.h>
#include <cmath>

using namespace std::chrono;
using namespace std;

void Brute_force(char* pat, char* txt);
void Brute_force_Cmp(char* pat, char* txt, long long &cnt_cmp);
