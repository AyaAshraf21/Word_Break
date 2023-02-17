#ifndef WORD_BREAKCLASS_H
#define WORD_BREAKCLASS_H
#include <iostream>
using namespace std;

class Word_BreakClass
{
public:
    Word_BreakClass();
    bool open_file();
    bool search_word(string word);
    bool check_word(string word, string result);
    string print_text();

};

#endif // WORD_BREAKCLASS_H
