
 cmake_minimum_required(VERSION 3.16.3)
 project(cppNoobTest)

set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
find_package(Threads REQUIRED)

 add_executable(main2 
                    main2.cpp)
 add_executable(main 
                    main.cpp factorial.cpp)
 add_executable(pythagoras1 
                    pythagoras1.cpp)
 add_executable(threads 
                    mainL.cpp)
 target_link_libraries(threads Threads::Threads)
