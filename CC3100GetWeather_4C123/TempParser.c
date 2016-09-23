//TempParser.c
//Joe Retter, jmr5823
//Brad Gray, bg22946
//Initial Creation Date: 21 Sep 2016
//Descritpion: Parse the Recvbuff to find the temperature
//Lab 4
//TA: Mahesh
//Date of Last Revision: 21 Sep 2016

#include <stdint.h>

#define MAX_TEMP_SIZE				8
#define TRUE								1
#define FALSE								0
#define bool 								uint8_t

//returns a pointer to the start of the temperature number in Recvbuff
//format of temp in recvbuff is "temp":27.73,
char* Get_Temperature_Pointer(char *Recvbuff) {
	
	char* temp_start = Recvbuff;
	bool temp_found = FALSE;
	int i = 0;
	
	while(temp_found == FALSE) {
		if(Recvbuff[i] == 't' && Recvbuff[i+1] == 'e' && Recvbuff[i+2] == 'm' && Recvbuff[i+3] == 'p' && Recvbuff[i+4] == '"') {
			temp_start = &Recvbuff[i+6];		//skip over the " and the :
			temp_found = TRUE;
		}			
		i++;
	}

	return temp_start;
}

void Create_Fixed_Length_String(char* start, char *string) {
	char * copy = "Temp = 00.00 F";
	uint8_t k = 0;
	for (k = 0; k < 15; k++){
		string[k] = copy[k];
	}
	string[7] = start[0];
	string[8] = start[1];
	string[10] = start[3];
	string[11] = start[4];
	
}

void Delete_Fixed_Length_String(uint32_t string_length, char* start) {
}
