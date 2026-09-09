
include_directories( ${QT_INCLUDES} ${CMAKE_SOURCE_DIR}/smoke )

configure_file(config.xml.cmake ${CMAKE_CURRENT_BINARY_DIR}/config.xml @ONLY)

########### next target ###############

include_directories (${CMAKE_SOURCE_DIR}/smoke ${CMAKE_SOURCE_DIR}/smoke/qtgui  )

set(smokeqtgui_LIB_SRCS smokedata.cpp  
                x_1.cpp 
                x_2.cpp
                x_3.cpp
                x_4.cpp
                x_5.cpp
                x_6.cpp
                x_7.cpp
                x_8.cpp
                x_9.cpp
                x_10.cpp
                x_11.cpp
                x_12.cpp
                x_13.cpp
                x_14.cpp
                x_15.cpp
                x_16.cpp
                x_17.cpp
                x_18.cpp
                x_19.cpp
                x_20.cpp
)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

# kde4_add_library(smokeqtgui SHARED ${smokeqtgui_LIB_SRCS})
add_library(smokeqtgui SHARED ${smokeqtgui_LIB_SRCS})

target_link_libraries(smokeqtgui smokeqtcore ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY} )

set_target_properties(smokeqtgui PROPERTIES VERSION 3.0.0 SOVERSION 3 )

# Don't use the KDE ${LIB_INSTALL_DIR} macro here as this file is
# for Qt only installs
install(TARGETS smokeqtgui DESTINATION ${CMAKE_INSTALL_PREFIX}/lib${LIB_SUFFIX} )
install(FILES ${CMAKE_SOURCE_DIR}/smoke/qtgui_smoke.h DESTINATION include/smoke)
