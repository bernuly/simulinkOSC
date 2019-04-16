cmake_minimum_required(VERSION 2.6)
PROJECT(send2SC)

#--INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR})

# separate versions of NetworkingUtils.cpp and UdpSocket.cpp are provided for Win32 and POSIX
# the IpSystemTypePath selects the correct ones based on the current platform

IF(WIN32)
 set(IpSystemTypePath ip/win32)
 set(LIBS ${LIBS} Ws2_32 winmm)
ELSE(WIN32)
 set(IpSystemTypePath ip/posix)
ENDIF(WIN32)

#--ADD_LIBRARY(oscpack 
#--
#--  ip/IpEndpointName.h
#--  ip/IpEndpointName.cpp
#--  
#--  ip/NetworkingUtils.h
#--  ${IpSystemTypePath}/NetworkingUtils.cpp
#--  
#--  ip/UdpSocket.h
#--  ${IpSystemTypePath}/UdpSocket.cpp
#--  
#--  ip/PacketListener.h
#--  ip/TimerListener.h
#--  
#--  osc/OscTypes.h
#--  osc/OscTypes.cpp 
#--  osc/OscHostEndianness.h
#--  osc/OscException.h
#--  osc/OscPacketListener.h
#--  osc/MessageMappingOscPacketListener.h
#--  osc/OscReceivedElements.h
#--  osc/OscReceivedElements.cpp
#--  osc/OscPrintReceivedElements.h
#--  osc/OscPrintReceivedElements.cpp
#--  osc/OscOutboundPacketStream.h
#--  osc/OscOutboundPacketStream.cpp
#--)
#--

include_directories(
  oscpack_1_1_0
)

link_directories(
  oscpack_1_1_0/build/Release
  ../oscpack_1_1_0/build/Release # if we build in the build subdir...
)

#set ( PROJECT_LINK_LIBS
#  oscpack
#)




ADD_EXECUTABLE(send2SC examples/send2SC.cpp)
TARGET_LINK_LIBRARIES(send2SC oscpack ${LIBS})



# if(MSVC)
#   # Force to always compile with W4
#   if(CMAKE_CXX_FLAGS MATCHES "/W[0-4]")
# #    string(REGEX REPLACE "/W[0-4]" "/W4" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
#   else()
# #    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
#   endif()
# elseif(CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX)
#   # Update if necessary
#   set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wno-long-long -pedantic")
# endif()
