#include <vector>
#include <iostream>
#include "profile.h"
#include <sstream>

Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns) : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) {}

std::string Profile::view_profile() {

    std::string str_age;
    std::stringstream ss;
    ss << age;
    ss >> str_age;
    std::string bio = "Name: " + name;
    bio += "\nAge: " + str_age;
    bio += "\nPronouns: " + pronouns;
    std::string hobby_string = "\nHobbies:\n";

    for (std::string hobby : hobbies) {
        hobby_string += " - " + hobby + "\n";
    }

    return bio + "\n" + hobby_string;
}

void Profile::add_hobby(std::string new_hobby) {
    hobbies.push_back(new_hobby);
}