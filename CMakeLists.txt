cmake_minimum_required(VERSION 3.13)
project(Steg11)

set(sources meniu.cpp OpenCV.cpp stdafx.h meniu.h ascImg.h extImg.h ascText.h extText.h OpenCV.h)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_executable(${PROJECT_NAME} ${sources})
target_link_libraries( ${PROJECT_NAME} 
	${CMAKE_CURRENT_SOURCE_DIR}/libs/opencv_core2413.lib
	${CMAKE_CURRENT_SOURCE_DIR}/libs/opencv_highgui2413.lib
)

set(CMAKE_CONFIGURATION_TYPES Release)
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /Ot")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /SUBSYSTEM:WINDOWS /ENTRY:Main")
set_target_properties( ${PROJECT_NAME} PROPERTIES
	COMMON_LANGUAGE_RUNTIME ""
	DOTNET_TARGET_FRAMEWORK_VERSION "v4.6.1" 
	CXX_STANDARD 17
	VS_DOTNET_REFERENCES "System;System.Data;System.Drawing;System.Windows.Forms;System.Xml;WindowsBase"
)

target_compile_options(${PROJECT_NAME} PRIVATE /fp:precise)
string(REPLACE "/EHsc" "" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD          
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    "${CMAKE_CURRENT_SOURCE_DIR}/bin/opencv_core2413.dll"
    "${CMAKE_CURRENT_SOURCE_DIR}/bin/opencv_highgui2413.dll" 
    "${CMAKE_CURRENT_SOURCE_DIR}/bin/opencv_imgproc2413.dll"              
    $<TARGET_FILE_DIR:${PROJECT_NAME}>
)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/bin/opencv_core2413.dll"
	"${CMAKE_CURRENT_SOURCE_DIR}/bin/opencv_highgui2413.dll" 
	"${CMAKE_CURRENT_SOURCE_DIR}/bin/opencv_imgproc2413.dll"   
	DESTINATION bin
)
install(FILES ${sources} DESTINATION src)
