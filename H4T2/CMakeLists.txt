cmake_minimum_required(VERSION 3.16)

project(H4T2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(H4T2 main.cpp
    henkilo.cpp henkilo.h
    osoite.cpp osoite.h)

include(GNUInstallDirs)
install(TARGETS H4T2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
