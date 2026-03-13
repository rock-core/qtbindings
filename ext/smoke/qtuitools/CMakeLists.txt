include_directories( ${QT_INCLUDES} ${CMAKE_SOURCE_DIR}/smoke  )

configure_file(config.xml.cmake ${CMAKE_CURRENT_BINARY_DIR}/config.xml @ONLY)

include_directories (${CMAKE_SOURCE_DIR}/smoke ${CMAKE_SOURCE_DIR}/smoke/qtuitools )

set(smokeqtuitools_LIB_SRCS smokedata.cpp
	x_1.cpp)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
add_library(smokeqtuitools SHARED ${smokeqtuitools_LIB_SRCS})

target_link_libraries(smokeqtuitools smokeqtcore smokeqtgui ${QT_QTCORE_LIBRARY} ${QT_QTUITOOLS_LIBRARY} ${QT_QTGUI_LIBRARY})

set_target_properties(smokeqtuitools PROPERTIES VERSION 3.0.0 SOVERSION 3 )

install(TARGETS smokeqtuitools DESTINATION ${CMAKE_INSTALL_PREFIX}/lib${LIB_SUFFIX} )
install(FILES ${CMAKE_SOURCE_DIR}/smoke/qtuitools_smoke.h DESTINATION include/smoke)
