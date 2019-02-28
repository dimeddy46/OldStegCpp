cmake_minimum_required(VERSION 3.13)
project(Steg11)

# ------------------ SET THIS PATH/TO/YOUR/OPENCV/BUILD FOLDER -------------------
set(OpenCV_DIR_HOME "D:/Downloads/opencv/build")
# ------------------------------------------------------------------------------

set(OpenCV_DIR "${OpenCV_DIR_HOME}/x64/vc14/lib")
set(OpenCV_FOUND 1)
find_package(OpenCV REQUIRED)

include_directories(${OpenCV_DIR_HOME}/include)
set(OPVER ${OpenCV_VERSION_MAJOR}${OpenCV_VERSION_MINOR}${OpenCV_VERSION_PATCH})
set(sources meniu.cpp OpenCV.cpp OpenCV.h stdafx.h meniu.h ascImg.h extImg.h ascText.h extText.h)
add_executable(${PROJECT_NAME} ${sources}) 

if(OpenCV_VERSION_MAJOR GREATER 2)
	target_link_libraries( ${PROJECT_NAME} 
		"${OpenCV_DIR}/opencv_world${OPVER}.lib"
)
else() 
	target_link_libraries( ${PROJECT_NAME} 
		"${OpenCV_DIR}/opencv_core${OPVER}.lib"
		"${OpenCV_DIR}/opencv_highgui${OPVER}.lib"
)
endif()

set(CMAKE_CONFIGURATION_TYPES Release)
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /Ot")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /SUBSYSTEM:WINDOWS /ENTRY:Main")
set_target_properties( ${PROJECT_NAME} PROPERTIES
	COMMON_LANGUAGE_RUNTIME ""
	DOTNET_TARGET_FRAMEWORK_VERSION "v4.6.1" 
	CXX_STANDARD 17
	VS_DOTNET_REFERENCES "System;System.Data;System.Drawing;System.Windows.Forms;System.Xml"
)

target_compile_options(${PROJECT_NAME} PRIVATE /fp:precise)
string(REPLACE "/EHsc" "" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
string(REPLACE "lib" "bin" BIN_PATH "${OpenCV_DIR}")

if(${OpenCV_VERSION_MAJOR} GREATER 2)
	add_custom_command( TARGET ${PROJECT_NAME} POST_BUILD  
   	    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    	    "${BIN_PATH}/opencv_world${OPVER}.dll"           
            $<TARGET_FILE_DIR:${PROJECT_NAME}>
)
else ()
	add_custom_command( TARGET ${PROJECT_NAME} POST_BUILD          
    	     COMMAND ${CMAKE_COMMAND} -E copy_if_different
    	     "${BIN_PATH}/opencv_core${OPVER}.dll"
             "${BIN_PATH}/opencv_highgui${OPVER}.dll" 
             "${BIN_PATH}/opencv_imgproc${OPVER}.dll"              
             $<TARGET_FILE_DIR:${PROJECT_NAME}>
)
endif()


# install(TARGETS ${PROJECT_NAME} DESTINATION bin)
# install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/bin/opencv_core2413.dll"
#	"${CMAKE_CURRENT_SOURCE_DIR}/bin/opencv_highgui2413.dll" 
#	"${CMAKE_CURRENT_SOURCE_DIR}/bin/opencv_imgproc2413.dll"   
#	DESTINATION bin
# )
# install(FILES ${sources} DESTINATION src)
