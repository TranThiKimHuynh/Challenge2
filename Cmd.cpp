#include "Header.h"

map<string, int> matching_list = {{"-bf", 1}, {"-rk", 2}, {"-kmp", 3}, {"-bm", 4}, {"-tw", 5}};
map<string, int> outp = {{"-t", 1}, {"-n", 2}, {"-ind", 3}};

double OutTime(int Alg, char *pat, char *txt)
{
    double time = 0;
    switch (Alg)
    {
    case 1:
        auto start = high_resolution_clock::now();
        Brute_force(pat, txt);
        auto end = high_resolution_clock::now();
        time = duration_cast<nanoseconds>(end - start).count() / 1000000.0;
        break;
    /*case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    */
    }
    return time;
}
long long OutCmp(int Alg, char *pat, char *txt)
{
    long long cnt_cmp = 0;
    switch (Alg)
    {
    case 1:
        Brute_force_Cmp(pat, txt, cnt_cmp);
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    default:
        break;
    }
    return cnt_cmp;
}
void OutInfo(int out, int Alg, char *pat, char *txt)
{
    switch (out)
    {
    case 1:
        cout <<"Thoi gian chay: "<< OutTime(Alg, pat, txt);
        break;
    case 2:
        cout <<"So so sanh: "<< OutCmp(Alg, pat, txt);
        break;
    case 3:
        cout <<"Thoi gian chay: "<< OutTime(Alg, pat, txt);
        cout <<"So so sanh: "<< OutCmp(Alg, pat, txt);
        break;
    default:
        break;
    }
}
void readInputF(char *&pat, char *&txt, string ipath ){
    ifstream ifs(ipath);
    string line1,line2;
    getline(ifs,line1);
    pat = line1.data();
    cout<<pat<<" ";
    getline(ifs,line2);
    txt = line2.data();
    ifs.close();
    cout<<txt<<"\n";
}
void Cmd(int argc, char **argv)
{
    int Alg = matching_list[string(argv[1])];
    int out = outp[string(argv[4])];
    string ipath = argv[2];
    string opath = argv[3];
    char *pat;
    char *txt;
    readInputF(pat,txt,ipath);
    OutInfo(out, Alg, pat, txt);
}
int main(int argc, char **argv)
{
    Cmd(argc, argv);
    return 0;
}