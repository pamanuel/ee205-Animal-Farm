
cmake_minimum_required(VERSION 3.0)
project(ee205_Animal_Farm)

set(CMAKE_CXX_STANDARD 14)

add_executable( ee205_Animal_Farm main.cpp Weight.cpp Weight.h Cat.cpp Cat.h Breed.h Color.h Gender.h Mammal.cpp Mammal.h List.cpp List.h SinglyLinkedList.cpp SinglyLinkedList.h Node.h Animal.cpp Animal.h Node.cpp)
