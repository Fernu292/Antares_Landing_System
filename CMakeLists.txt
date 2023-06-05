cmake_minimum_required(VERSION 3.25)
project(Antares_land_system)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(Antares_land_system main.cpp src/Layaout/Header.cpp src/Layaout/Header.h src/Components/Button.cpp src/Components/Button.h)
target_link_libraries(Antares_land_system
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

