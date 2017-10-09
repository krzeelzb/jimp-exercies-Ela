//
// Created by ela on 08.04.17.
//

#ifndef JIMP_EXERCISES_STUDENTREPOSITORY_H
#define JIMP_EXERCISES_STUDENTREPOSITORY_H
#include <complex>
#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <initializer_list>
namespace academia{

     class  StudyYear {
        int year_;
    public:
        StudyYear();
        StudyYear(int year);
        ~StudyYear();

        StudyYear &operator++() {
            ++year_;
            return *this;
        }

        StudyYear &operator--() {
            --year_;
            return *this;

        }

                  bool operator==(const StudyYear &rhs) const;


         operator int() const;
         friend std::istream& operator>>(std::istream & output, StudyYear &year);
         friend std::ostream &operator<<(std::ostream &os, const StudyYear &year);

         bool operator<(const StudyYear &rhs) const;

         bool operator>(const StudyYear &rhs) const;

         bool operator<=(const StudyYear &rhs) const;

         bool operator>=(const StudyYear &rhs) const;

     };




    class Student{
    public:
        Student();
        Student(std::string id,std::string  firstname, std::string lastname,std::string  program, int year);
        ~Student();

                bool operator==(const Student &rhs) const;

        friend std::ostream &operator<<(std::ostream &os, const Student &student);
        friend std::istream& operator>>(std::istream & input, Student &student);

    private:
        std::string Id, firstname_, lastname_, program_;
         StudyYear year_;

    };





    class StudentRepository {
    public:
        StudentRepository(std::initializer_list<Student> replist) :replist_(replist) {}

         ~StudentRepository() {}



        bool operator==(const StudentRepository &rhs) const {
            return replist_ == rhs.replist_;
        }
        std::vector<Student>  & operator [](int el) const;

        friend std::ostream &operator<<(std::ostream &os, const StudentRepository &repository);



    private:
        std::vector<Student> replist_;
    };




}



#endif //JIMP_EXERCISES_STUDENTREPOSITORY_H
