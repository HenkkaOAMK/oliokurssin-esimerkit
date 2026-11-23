cmake_minimum_required(VERSION 3.16)

project(Aggregaatio LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Aggregaatio main.cpp
    employee.h employee.cpp
    company.h company.cpp)

include(GNUInstallDirs)
install(TARGETS Aggregaatio
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
