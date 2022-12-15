#include "Header.h"

void Brute_force_Cmp(string pat, string txt, long long &cnt_cmp)
{
    int M = pat.length();
    int N = txt.length();
 
    for (int i = 0; ++cnt_cmp && i <= N - M; i++) {
        int j;
 
        for (j = 0; ++cnt_cmp && j < M; j++)
            if (++cnt_cmp && txt[i + j] != pat[j])
                break;
 
        
    }
}
void Brute_force(string pat, string txt)
{
    int M = pat.length();
    int N = txt.length();
 
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;
 
        if (j== M) 
            cout <<"Pattern found at index: "<<i;
    }
}

