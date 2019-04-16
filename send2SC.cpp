/*
	Simple example of sending an OSC message using oscpack.
*/

#include <windows.h>

#include <string>
#include <iostream>
#include "osc/OscOutboundPacketStream.h"
#include "ip/UdpSocket.h"


#define ADDRESS "127.0.0.1"
#define PORT 57120

#define OUTPUT_BUFFER_SIZE 1024

void initSC(UdpTransmitSocket &transmitSocket, osc::OutboundPacketStream &p) {
	std::cout << "initSC(UdpTransmitSocket &transmitSocket, osc::OutboundPacketStream &p)" << std::endl;


	std::string strWd = "C:\\Users\\Ulysses\\Dropbox\\+SH_Projects\\VH_Breathing_Relaxation.git\\BreathingSound";
	std::string strPathsyndefs = strWd +  "\\synthdefs";
	std::string strPathwavs = strWd + "\\BrthSnd";


	
	// first we need to load the SynthDef
	strPathsyndefs += "\\brthWavMulti.scsyndef";
	p.Clear();
	p << osc::BeginMessage("/d_load") << strPathsyndefs.c_str() << osc::EndMessage;
	transmitSocket.Send(p.Data(), p.Size());

	
	std::string strPath = strPathwavs + "\\Nose_Ulysses_01_stretched.wav";
	p.Clear();
	p << osc::BeginMessage("/b_allocRead") << 1 << strPath.c_str() << osc::EndMessage;
	transmitSocket.Send(p.Data(), p.Size());

	strPath = strPathwavs + "\\Mouth_Ulysses_01_stretched.wav";
	p.Clear();
	p << osc::BeginMessage("/b_allocRead") << 0 << strPath.c_str() << osc::EndMessage;
	transmitSocket.Send(p.Data(), p.Size());


}

void controlSC(UdpTransmitSocket &transmitSocket, osc::OutboundPacketStream &p, int bnNose, int bnMouth, int duration, float ampNose, float ampMouth) {
	p.Clear();


	int nodeID = (int)(rand() * 100);



	p << osc::BeginMessage("/s_new") << "brthWavMulti";
	p << nodeID;
	p << 1;
	p << 0;
	p << "bnNose" << bnNose;
	p << "bnMouth" << bnMouth;
	p << "dur" << duration;
	p << "ampNose" << ampNose;
	p << "ampMouth" << ampMouth;
	p << osc::EndMessage;


	transmitSocket.Send(p.Data(), p.Size());

}

int main(int argc, char* argv[]) {
	(void)argc; // suppress unused parameter warnings
	(void)argv; // suppress unused parameter warnings

	UdpTransmitSocket transmitSocket(IpEndpointName(ADDRESS, PORT));

	char buffer[OUTPUT_BUFFER_SIZE];
	osc::OutboundPacketStream p(buffer, OUTPUT_BUFFER_SIZE);
	initSC(transmitSocket, p);
	Sleep(1000);
	int bnNose = 1;
	int bnMouth = 0;
	int duration = 1;
	float ampNose = 0.99;
	float ampMouth = 0.98;

	while (1) {
			controlSC(transmitSocket, p, bnNose, bnMouth, duration, ampNose, ampMouth);
		Sleep(3000);
	}
	
}

/*
existing system:
[/s_new OSC-string:`brthWavMulti', int32:5768, int32:1, int32:0, OSC-string:`bnNose', int32:1, OSC-string:`bnMouth', int32:0, OSC-string:`dur', int32:3, OSC-string:`ampNose', float32:0.01, OSC-string:`ampMouth', float32:0.025]
[/s_new OSC-string:`brthWavMulti', int32:4100, int32:1, int32:0, OSC-string:`bnNose', int32:1, OSC-string:`bnMouth', int32:1, OSC-string:`dur', int32:1, OSC-string:`ampNose', float32:0.99, OSC-string:`ampMouth', float32:0.98]


*/