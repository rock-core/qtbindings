
include_directories( ${QT_INCLUDES} ${CMAKE_SOURCE_DIR}/smoke )

configure_file(config.xml.cmake ${CMAKE_CURRENT_BINARY_DIR}/config.xml @ONLY)

########### next target ###############

include_directories (${CMAKE_SOURCE_DIR}/smoke ${CMAKE_SOURCE_DIR}/smoke/qtnetwork  )

set(smokeqtnetwork_LIB_SRCS smokedata.cpp  
                x_1.cpp 
)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

# kde4_add_library(smokeqtnetwork SHARED ${smokeqtnetwork_LIB_SRCS})
add_library(smokeqtnetwork SHARED ${smokeqtnetwork_LIB_SRCS})

target_link_libraries(smokeqtnetwork smokeqtcore ${QT_QTCORE_LIBRARY} ${QT_QTNETWORK_LIBRARY} )

set_target_properties(smokeqtnetwork PROPERTIES VERSION 3.0.0 SOVERSION 3 )

# Don't use the KDE ${LIB_INSTALL_DIR} macro here as this file is
# for Qt only installs
install(TARGETS smokeqtnetwork DESTINATION ${CMAKE_INSTALL_PREFIX}/lib${LIB_SUFFIX} )
install(FILES ${CMAKE_SOURCE_DIR}/smoke/qtnetwork_smoke.h DESTINATION include/smoke)
