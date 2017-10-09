//
// Created by ela on 09.04.17.
//

#include "WordCounter.h"

namespace datastructures{


    Counts::Counts() {}
    Counts::Counts(int counts) { counts_=counts; }
    bool Counts::operator==(const Counts &rhs) const { return counts_ == rhs.counts_; }
    bool Counts::operator<(const Counts &rhs) const { return counts_ < rhs.counts_; }
    bool Counts::operator>(const Counts &rhs) const { return rhs < *this; }
    Counts::~Counts() {    }

    Word::Word() {}
    Word::Word(std::string key) { key_=key; }
    Word::~Word() {}
    Word::operator std::string() const { return key_; }
    bool Word::operator<(const Word &rhs) const { return key_ < rhs.key_; }
    bool Word::operator>(const Word &rhs) const { return rhs < *this; }
    bool Word::operator==(const Word &rhs) const { return key_ == rhs.key_; }


    WordCounter::WordCounter() {}
  /*  WordCounter::WordCounter(std::list<Word> list) {
        for(auto n:list){

            list_.insert(std::pair<Word,Counts>);

        }
    }*/
    WordCounter::~WordCounter() {}
    void WordCounter::FromInputStream(std::iostream text) {
    }

  /*std::ostream &datastructures::operator<<(std::ostream &os,  WordCounter &counter) {
      os << "wc_: " << counter.list_;
      return os;
  }*/

  /*  WordCounter::WordCounter(std::string path) {
        std::ifstream myfile(path);
       std:: string line;
        if(!myfile)
            std::cout << "Nie można otworzyć pliku!" ;

        while(!myfile.eof()){
            getline(myfile,line);
        }
        std::string tmp;
        for(int i=0;i<line.size();i++) {
            if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')) {
                tmp += i;
            }
        }

        myfile.close();


    }*/

    int WordCounter:: DistinctWords() {
        return list_.size();
    }

     int WordCounter::TotalWords() {
         int sum=0;
         for(auto it=list_.begin();it!=list_.end();it++){
             sum+=it->second;
         }
        return sum;
    }

    Counts WordCounter::operator[](const std::string key) {
        Word word(key);
        for(auto it=list_.begin();it!=list_.end();it++) {
           if (it->first == word)
                return it->second;
        }
        return 0;
    }


    std::set<Word> WordCounter::Words() {
        std::set<Word> words{};
        for (auto it = list_.begin(); it != list_.end(); ++it) {
            words.insert(it->first);
        }
        return words;
    }

    WordCounter::WordCounter(std::initializer_list<Word> list) {
        Counts counter = 1;
        bool is_first = true;
        bool after_loop = false;
        for (auto a : list) {
            if (is_first) {
                list_.insert(std::make_pair(a, counter));
                is_first = false;
                continue;
            }
            for (auto it = list_.begin(); it != list_.end(); it++) {
                if ((*it).first == a) {
                    ++(*it).second;
                    after_loop = true;
                    break;
                }
            }
            if (!after_loop) {
                list_.insert(std::make_pair(a, counter));
            } else {
                after_loop = false;
            }
        }
    }


}