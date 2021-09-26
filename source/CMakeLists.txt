cmake_minimum_required(VERSION 3.17)

add_executable(Skillbox_HW_26_2 main.cpp Smartphone.cpp Phonebook.cpp Phonenumber.cpp)
target_include_directories(Skillbox_HW_26_2 PUBLIC ${MY_INCLUDE_DIR})