//
// Created by ela on 03.04.17.
//

#include "TextPool.h"
namespace pool {


    TextPool::TextPool() {}



    TextPool::TextPool(TextPool &&pool) {
        poolset_={};
        swap(poolset_, pool.poolset_);
    }

    TextPool &TextPool::operator=(TextPool &&pool) {
        if (this == &pool) {
            return pool;
        }
        poolset_={};
        swap(poolset_, pool.poolset_);
    }

    std::experimental::string_view TextPool::Intern(const std::string &str) {

        for (auto n:poolset_) {
            if (n==str){
                 return n;
            }
        }

        std::experimental::string_view toadd{str};
        poolset_.insert(toadd);
        return toadd;
    }

    size_t TextPool::StoredStringCount() const {
           return poolset_.size();

    }
    TextPool::~TextPool() {}
}