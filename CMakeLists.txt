cmake_minimum_required(VERSION 3.5)

project(SimpleStylePlugin)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

set(HEADERS
        src/SimpleStyle.h
        src/SimpleStylePlugin.h
)

set(SOURCES
        src/SimpleStyle.cpp
        src/SimpleStylePlugin.cpp
)

set(TARGET SimpleStylePlugin)

add_library(${TARGET} MODULE ${HEADERS} ${SOURCES})

target_link_libraries(${TARGET} PRIVATE Qt5::Widgets)

if(WIN32)
    if(CMAKE_BUILD_TYPE MATCHES "Debug")
        set(DESTDIR "../debug/styles/")
    else()
        set(DESTDIR "../release/styles/")
    endif()
else()
    set(DESTDIR "../styles/")
endif()

install(TARGETS ${TARGET}
        DESTINATION "${QT_INSTALL_EXAMPLES}/widgets/tools/styleplugin/styles"
)

set(EXAMPLE_FILES simplestyle.json)

install(FILES ${EXAMPLE_FILES}
        DESTINATION "${QT_INSTALL_EXAMPLES}/widgets/tools/styleplugin/styles"
)