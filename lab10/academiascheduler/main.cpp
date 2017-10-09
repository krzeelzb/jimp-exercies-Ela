//
// Created by ela on 15.05.17.
//



#include "Scheduler.h"
using namespace academia;

using ::std::vector;
using ::std::set;
using ::std::string;
using ::std::map;
using ::std::make_pair;
using ::std::ostream;
using ::std::accumulate;
using ::std::begin;
using ::std::end;
using ::std::pair;
using ::std::distance;
using ::std::find;

int main(){
    std::vector<int> rooms{1000};
    std::map<int, vector<int>> teachers{std::make_pair(100, std::vector<int>{10, 20}), std::make_pair(200, std::vector<int>{30}),
                                             std::make_pair(300, std::vector<int> {40})};
    std::map<int, std::set<int>> years{std::make_pair(1, std::set<int>{10, 20}), std::make_pair(2, std::set<int>{30, 40})};

    Schedule schedule;
}