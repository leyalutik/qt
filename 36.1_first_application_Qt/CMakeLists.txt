cmake_minimum_required(VERSION 3.21 ) # "QT files are not compiled")

project(main VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDART C17 ) # "QT files are not compiled"	)
set(CMAKE_CXX_STANDART_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# set(CMAKE_PREFIX_PATH "/home/runner/QT/.config")
set(CMAKE_PREFIX_PATH "/home/leyalutik/Qt/5.15.2/gcc_64/lib/cmake")

find_package(Qt5 COMPONENTS  
                Core
		Gui
		Widgets
		REQUIRED
		)
	

	add_executable(main 
	main.cpp
	#mainwindow.ui
	#mainwindow.cpp
	#resourses.qrc
	)

target_link_libraries(main 
	Qt5::Core
	Qt5::Gui
	Qt5::Widgets
	)

