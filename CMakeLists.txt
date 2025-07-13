cmake_minimum_required(VERSION 3.14)

project(AppTimer)

set(CMAKE_CXX_STANDARD 17)

# ✅ Indica dove si trova Qt sul tuo sistema
set(CMAKE_PREFIX_PATH "C:/Qt/6.9.1/mingw_64/lib/cmake/Qt6")

# ✅ Trova pacchetti Qt
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_AUTOUIC_SEARCH_PATHS ${CMAKE_SOURCE_DIR}/ui)


# ✅ File
set(SOURCES
        main.cpp
        src/MainWindow.cpp
        src/Tempo.cpp
        src/Timer.cpp
        src/Data.cpp
)

set(HEADERS
        include/MainWindow.h
        include/Tempo.h
        include/Timer.h
        include/Data.h
)



# ✅ Crea eseguibile
add_executable(AppTimer ${SOURCES} ${HEADERS} ${UIS})

# ✅ Include directory (manuale, visto che automoc/autouic lavora in background)
target_include_directories(AppTimer PRIVATE include ui)

# ✅ Collega librerie Qt
target_link_libraries(AppTimer Qt6::Core Qt6::Gui Qt6::Widgets)

