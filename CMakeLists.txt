
 cmake_minimum_required(VERSION 3.16.3)
 project(cppNoobTest)
 add_executable(main2 
                    main2.cpp)
 add_executable(main 
                    main.cpp factorial.cpp)
 add_executable(pythagoras1 
                    pythagoras1.cpp)
 add_executable(threads 
                    mainL.cpp)
 add_link_options(-pthread)
