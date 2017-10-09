//
// Created by ela on 08.04.17.
//

#include "StudentRepository.h"

namespace academia {


    StudyYear::StudyYear() {}
    StudyYear::StudyYear(int year) {
        year_ = year;
    }
    StudyYear::operator int() const {
        return year_;
    }
    StudyYear::~StudyYear() {}
    Student::Student() {}
    Student::~Student() {}
    Student::Student(std::string id, std::string firstname, std::string lastname, std::string program, int year) :year_(year){
        Id = id;
        firstname_ = firstname;
        lastname_ = lastname;
        program_ = program;
    }


    std::ostream &operator<<(std::ostream &os, const StudentRepository &repository) {
        for(auto it=repository.replist_.begin();it!=repository.replist_.end(); ++it){
            os<<(*it);
        }
        return os;
    }

    std::vector<Student> &StudentRepository::operator[](int el) const {
        for(auto i:replist_){
            if(el==replist_)
        }
        return replist_;
    }


    std::ostream &operator<<(std::ostream &os, const StudyYear &year) {
        os << year.year_;
        return os;
    }
    std::ostream &operator<<(std::ostream &os, const Student &student) {
        os << "{id: \"" << student.Id << " \", first_name: \"" << student.firstname_ << "\", last_name: \"" << student.lastname_
           << "\", program: \"" << student.program_ << "\", year: " << (int)student.year_;
        return os;
    }



    std::istream& operator>>(std::istream & input, Student &student){
        std::string ide;
        input>>ide;
        student.Id=ide;
        std::string fname;
        input>>fname;
        student.firstname_=fname;
        std::string lname;
        input>>lname;
        student.lastname_=lname;
        std::string pro;
        input>>pro;
        student.program_=pro;
        std::string year;
        input>>year;
        student.year_=StudyYear({static_cast<int>(year[0])});

        return input;
    }
    std::istream& operator>>(std::istream & input, StudyYear &year){
        int x;
        input>>x;
        year.year_ = x;
        return input;
    }
    std::istream& operator>>(std::istream & input, StudentRepository &rep){
        return input;
    }



    bool StudyYear::operator==(const StudyYear &rhs) const {
        return year_ == rhs.year_;
    }


    bool Student::operator==(const Student &rhs) const {
        return Id == rhs.Id &&
               firstname_ == rhs.firstname_ &&
               lastname_ == rhs.lastname_ &&
               program_ == rhs.program_ &&
               year_ == rhs.year_;
    }


    bool StudyYear::operator<(const StudyYear &rhs) const {
        return year_ < rhs.year_;
    }

    bool StudyYear::operator>(const StudyYear &rhs) const {
        return rhs < *this;
    }

    bool StudyYear::operator<=(const StudyYear &rhs) const {
        return !(rhs < *this);
    }

    bool StudyYear::operator>=(const StudyYear &rhs) const {
        return !(*this < rhs);
    }


}