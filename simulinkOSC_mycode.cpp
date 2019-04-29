#include <mex.h>

#include <string>
#include <iostream>
#include <sstream>
#include <Windows.h>

#include "oscpack_1_1_0/osc/OscOutboundPacketStream.h"
#include "oscpack_1_1_0/ip/UdpSocket.h"




std::string int_array_to_string(const uint16_T * int_array, int size_of_array) {
  std::ostringstream oss("");

  for (int temp = 0; temp < size_of_array; temp++) {
    oss << (char)int_array[temp];
  }
  std::string str = oss.str();
  std::size_t found = str.find('\0');
  str = str.substr(0, found);
  return str;
}


void initSC(UdpTransmitSocket *transmitSocket, osc::OutboundPacketStream *p,
            std::string strPathsyndefs, std::string strPathwavs) {
  std::cerr << "#initSC(UdpTransmitSocket &transmitSocket, osc::OutboundPacketStream &p)" << std::endl;

  
  //  std::string strWd = "C:\\Users\\Ulysses\\Dropbox\\+SH_Projects\\VH_Breathing_Relaxation.git\\BreathingSound";
  //  strPathsyndefs = strWd +  "\\synthdefs";
  //  strPathwavs = strWd + "\\BrthSnd";

  
  // first we need to load the SynthDef
  //  strPathsyndefs += "\\brthWavMulti.scsyndef";
  p->Clear();
  *p << osc::BeginMessage("/d_load") << strPathsyndefs.c_str() << osc::EndMessage;
  transmitSocket->Send(p->Data(), p->Size());

  std::string strPath;
  strPath = strPathwavs + "\\Nose_Ulysses_01_stretched.wav";
  p->Clear();
  *p << osc::BeginMessage("/b_allocRead") << 1 << strPath.c_str() << osc::EndMessage;
  transmitSocket->Send(p->Data(), p->Size());

  strPath = strPathwavs + "\\Mouth_Ulysses_01_stretched.wav";
  p->Clear();
  *p << osc::BeginMessage("/b_allocRead") << 0 << strPath.c_str() << osc::EndMessage;
  transmitSocket->Send(p->Data(), p->Size());

  std::cerr << "end initSC()" << std::endl;

}



void controlSC(UdpTransmitSocket *transmitSocket, osc::OutboundPacketStream *p,
               int bnNose, int bnMouth, float duration, float ampNose, float ampMouth) {
  p->Clear();
  int nodeID = (int)(rand() * 10);
  *p << osc::BeginMessage("/s_new") << "brthWavMulti";
  *p << nodeID;
  *p << 1;
  *p << 0;
  *p << "bnNose" << bnNose;
  *p << "bnMouth" << bnMouth;
  *p << "dur" << duration;
  *p << "ampNose" << ampNose;
  *p << "ampMouth" << ampMouth;
  *p << osc::EndMessage;
  transmitSocket->Send(p->Data(), p->Size());
  //  Sleep(1000 / 25);
}



void myStart(void **pW,
             const uint16_T *server, const int_T p_width0,
             const uint16_T *port, const int_T p_width1,
             const uint16_T *pathsyndefs, const int_T p_width2,
             const uint16_T *pathwavs, const int_T p_width3)
{

#define ADDRESS "127.0.0.1"
#define PORT 57120
  
  std::string strServer = int_array_to_string(server, p_width0);
  int iPort = *port;
  strServer = "127.0.0.1";
  iPort = 57120;

  
#define OUTPUT_BUFFER_SIZE 1024
  UdpTransmitSocket *transmitSocket = new UdpTransmitSocket(IpEndpointName(strServer.c_str(), iPort));
  pW[0] = (void *)transmitSocket;
  
  char buffer[OUTPUT_BUFFER_SIZE];
  osc::OutboundPacketStream *p = new osc::OutboundPacketStream(buffer, OUTPUT_BUFFER_SIZE);
  pW[1] = (void *)p;

  std::string strPathsyndefs = int_array_to_string(pathsyndefs, p_width2);
  std::string strPathwavs = int_array_to_string(pathwavs, p_width3);
  
  initSC(transmitSocket, p, strPathsyndefs, strPathwavs);
//--  Sleep(1000 / 25);
}

void myUpdate(const real_T *bnNose,
              const real_T *bnMouth,
              const real_T *duration,
              const real_T *ampNose,
              const real_T *ampMouth,
              void **pW,
              const uint16_T *server, const int_T p_width0,
              const uint16_T *port, const int_T p_width1,
              const uint16_T *pathsyndefs, const int_T p_width2,
              const uint16_T *pathwavs, const int_T p_width3){

  UdpTransmitSocket *transmitSocket = (UdpTransmitSocket *)pW[0];
  osc::OutboundPacketStream *p = (osc::OutboundPacketStream *)pW[1];
  controlSC(transmitSocket, p, (int)*bnNose, (int)*bnMouth, (float)*duration, (float)*ampNose, (float)*ampMouth);
}


void myTerminate(void **pW,
                 const uint16_T *server, const int_T p_width0,
                 const uint16_T *port, const int_T p_width1,
                 const uint16_T *pathsyndefs, const int_T p_width2,
                 const uint16_T *pathwavs, const int_T p_width3){

  UdpTransmitSocket *transmitSocket = (UdpTransmitSocket *)pW[0];
  osc::OutboundPacketStream *p = (osc::OutboundPacketStream *)pW[1];
  delete p;
  delete transmitSocket;
  
}




