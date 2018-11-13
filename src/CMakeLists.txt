cmake_minimum_required(VERSION 3.1.0)

# Find includes in the build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Turn on automatic invocation of the MOC
set(CMAKE_AUTOMOC ON)

find_package(Qt5 COMPONENTS Core Widgets Gui REQUIRED)

set(UI_HEADERS "")
set(SOURCES "")

# Generate code from ui files
qt5_wrap_ui(UI_HEADERS gui/mainwindow/mainwindow.ui)
# Generate rules for building source files from the resources
# where to put resources?
#qt5_add_resources(QRCS resources.qrc)

# Tell CMake to create the helloworld executable
#add_executable(ProjectExec main.cpp mainwindow.cpp ${UI_HEADERS} ${QRCS})

add_subdirectory(gui)

add_executable(ProjectExec main.cpp gui/mainwindow/mainwindow.cpp ${UI_HEADERS})

#add_executable(ProjectExec main.cpp)

# Add the Qt5 Widgets for linking
target_link_libraries(ProjectExec PRIVATE "${PROJECT_LIB}" Qt5::Widgets Qt5::Core Qt5::Gui)

find_library(PROJECT_LIB ProjectLib)

link_directories(/usr/include)
