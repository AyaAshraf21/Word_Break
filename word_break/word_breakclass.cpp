#include "word_breakclass.h"
#include <string>
#include <fstream>


Word_BreakClass::Word_BreakClass()
{

}


ifstream infile;

bool Word_BreakClass:: open_file() {
    infile.open("C:/Users/Aya Ashraf/Downloads/Telegram Desktop/dictionary.txt", ios::in);
    if (!infile) {
        return false;
    }
    else {
        return true;
    }
}




bool Word_BreakClass:: search_word(string word) {
    if (open_file()) {
        string line;
        while (infile>>line)
        {
            if (line == word) {
                infile.close();
                return true;
            }

        }
        infile.close();
        return false;
    }
}





string text = "";
bool Word_BreakClass:: check_word(string word, string result) {
    string str;
    if (word == "") {
        result += str;
        text += result;
        text += '\n';
        return true;
    }
    else {
        for (int i = 1; i <= word.size(); i++) {
            str = word.substr(0, i);
            if (search_word(str)) {
                string remaining = word.substr(i);
                check_word(remaining, result + str + " ");
            }
        }
    }
}

string Word_BreakClass:: print_text(){
    return text;
}



















