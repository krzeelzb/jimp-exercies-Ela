//
// Created by ela on 27.03.17.
//

#ifndef JIMP_EXERCISES_SIMPLETEMPLEENGINE_H
#define JIMP_EXERCISES_SIMPLETEMPLEENGINE_H

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <string>

namespace nets{
    class View{
    public:
        View();

        View(std::string Template);

        std::string Render(const std::unordered_map <std::string, std::string> &model) const;

    ~View();

    private:
        std::string template_;

    };



}



#endif //JIMP_EXERCISES_SIMPLETEMPLEENGINE_H
