cmake_minimum_required(VERSION 3.16)

project(H4T4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(H4T4 main.cpp
    henkilo.cpp henkilo.h yritys.cpp yritys.h
    osoite.h osoite.cpp)

include(GNUInstallDirs)
install(TARGETS H4T4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
