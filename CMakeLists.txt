cmake_minimum_required(VERSION 3.24)
project(CPP_Lecture)

set(CMAKE_CXX_STANDARD 23)

include_directories(2_Objektorientierung/2_2_HeaderFiles)

#add_executable(code_cpp
#        2_Objektorientierung/2_2_HeaderFiles/main.cpp
#        2_Objektorientierung/2_2_HeaderFiles/Person.cpp
#        2_Objektorientierung/2_2_HeaderFiles/Person.hpp
#        2_Objektorientierung/2_2_HeaderFiles/Vehicle.cpp
#        2_Objektorientierung/2_2_HeaderFiles/Vehicle.hpp)

#add_executable(code_cpp
#        2_Objektorientierung/2_3_Vererbung/main.cpp
#        2_Objektorientierung/2_3_Vererbung/Person.cpp
#        2_Objektorientierung/2_3_Vererbung/Person.hpp
#        2_Objektorientierung/2_3_Vererbung/Student.cpp
#        2_Objektorientierung/2_3_Vererbung/Student.hpp
#        2_Objektorientierung/2_3_Vererbung/Professor.cpp
#        2_Objektorientierung/2_3_Vererbung/Professor.hpp
#        2_Objektorientierung/2_3_Vererbung/MailHandler.cpp
#        2_Objektorientierung/2_3_Vererbung/MailHandler.hpp)

#add_executable(code_cpp
#        2_Objektorientierung/2_4_Polymorphismus/main.cpp
#        2_Objektorientierung/2_4_Polymorphismus/Place.cpp
#        2_Objektorientierung/2_4_Polymorphismus/Place.hpp
#        2_Objektorientierung/2_4_Polymorphismus/Sights.cpp
#        2_Objektorientierung/2_4_Polymorphismus/Sights.hpp
#        2_Objektorientierung/2_4_Polymorphismus/Toilets.cpp
#        2_Objektorientierung/2_4_Polymorphismus/Toilets.hpp)

#add_executable(code_cpp
#        3_Vertiefung_C++/3_1_weitere_Keywords/3_1_2_User/main.cpp
#        3_Vertiefung_C++/3_1_weitere_Keywords/3_1_2_User/User.cpp
#        3_Vertiefung_C++/3_1_weitere_Keywords/3_1_2_User/User.hpp)

add_executable(code_cpp
        3_Vertiefung_C++/3_1_weitere_Keywords/3_1_3_Bankkonto_Verwaltung/main.cpp
        3_Vertiefung_C++/3_1_weitere_Keywords/3_1_3_Bankkonto_Verwaltung/Konto.cpp
        3_Vertiefung_C++/3_1_weitere_Keywords/3_1_3_Bankkonto_Verwaltung/Konto.hpp 3_Vertiefung_C++/3_1_weitere_Keywords/3_1_3_Bankkonto_Verwaltung/Girokonto.cpp 3_Vertiefung_C++/3_1_weitere_Keywords/3_1_3_Bankkonto_Verwaltung/Girokonto.hpp 3_Vertiefung_C++/3_1_weitere_Keywords/3_1_3_Bankkonto_Verwaltung/Tagesgeld.cpp 3_Vertiefung_C++/3_1_weitere_Keywords/3_1_3_Bankkonto_Verwaltung/Tagesgeld.hpp 3_Vertiefung_C++/3_1_weitere_Keywords/3_1_3_Bankkonto_Verwaltung/Bausparvertrag.cpp 3_Vertiefung_C++/3_1_weitere_Keywords/3_1_3_Bankkonto_Verwaltung/Bausparvertrag.hpp)
