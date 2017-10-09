//
// Created by ela on 31.05.17.
//

#ifndef JIMP_EXERCISES_TIMERECORDER_H
#define JIMP_EXERCISES_TIMERECORDER_H

#include <cstddef>
#include <initializer_list>
#include <algorithm>

namespace profiling{
   // template<class T,class M>
    class TimeRecorder{
    public:
        TimeRecorder(){};
        TimeRecorder( const int &el): elements_(el){};
        ~TimeRecorder(){};



        //auto TimeRecorder(const TimeRecorder<T> &to_copy)

        int operator() (int a, int b) {
            return (a+b);
        }

    private:
        int  elements_;
       // T elfirst=elements_.first;


    };
}


#endif //JIMP_EXERCISES_TIMERECORDER_H
