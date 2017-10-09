//
// Created by ela on 27.03.17.
//

#include "SimpleTemplateEngine.h"
namespace nets {
    View::View() {}

     View::View(std::string Template) {
        template_ = Template;
    }

    View::~View() {}

    std::string View::Render(const std::unordered_map<std::string, std::string> &model) const {

        std::string tofind = "";
        std::string sentence = template_;
        std::string rendered = "";
        std::string found = "";

        for (int i = 0; i < sentence.size(); i++) {
            if ((sentence[i] == '{') and (sentence[i + 1] == '{') and (sentence[i + 2] != '{')) {
                i+=2;
                int ival = i;
                for (int j = ival; j < sentence.size() ; j++) {
                    if ((sentence[j] == '}') and (sentence[j + 1] == '}')) {
                        i += 2;
                        break;
                    }
                    tofind += sentence[j];
                    i++;
                }
                for (auto n:model) {
                    if (n.first == tofind ) {
                        rendered+=n.second;
                    }
                }
                tofind = "";

            }
            if(i<sentence.size())
                rendered += sentence[i];
        }
        return rendered;
    }
}





