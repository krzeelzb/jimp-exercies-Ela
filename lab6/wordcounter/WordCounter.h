//
// Created by ela on 09.04.17.
//

#ifndef JIMP_EXERCISES_WORDCOUNTER_H
#define JIMP_EXERCISES_WORDCOUNTER_H
#include <complex>
#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <set>
#include <initializer_list>

#include <fstream>
namespace datastructures{

    class  Counts{
    public:
        Counts();
        Counts(int counts);
        ~Counts();

        bool operator==(const Counts &rhs) const;
        bool operator<(const Counts &rhs) const;
        bool operator>(const Counts &rhs) const;
        operator int() const {
            return counts_;
        }
        Counts &operator++() {
            ++counts_;
            return *this;
        }
        Counts &operator--() {
            --counts_;
            return *this;
        }

    private:
        int counts_;
    };

    class Word{
    public:
        Word();
        Word(std::string key);
        ~Word();
        bool operator<(const Word &rhs) const;
        bool operator>(const Word &rhs) const;
        operator std::string() const;
        bool operator==(const Word &rhs) const;
    private:
        std::string key_;
    };

    class WordCounter{
    public:
        WordCounter();
        WordCounter(std::initializer_list<Word> list);
       // WordCounter(std:: string word):word_(word){};
       // WordCounter(std::string path);
        void FromInputStream(std::iostream text);
        int DistinctWords();
        int TotalWords();
        Counts operator[](const std::string key);
        std::set<Word> Words();
   //     friend std::ostream &operator<<(std::ostream &os,  WordCounter &counter);;
        ~WordCounter();
    private:
        std::map <Word,Counts> list_;
        std::string word_;
    };
}




#endif //JIMP_EXERCISES_WORDCOUNTER_H
