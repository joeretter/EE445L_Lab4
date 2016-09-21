//TempParser.h
//Joe Retter, jmr5823
//Brad Gray, bg22946
//Initial Creation Date: 21 Sep 2016
//Descritpion: Parse the Recvbuff to find the temperature
//Lab 4
//TA: Mahesh
//Date of Last Revision: 21 Sep 2016

//returns a pointer to the start of the temperature number in Recvbuff
//format of temp in recvbuff is "temp":27.73,
char* Get_Temperature_Pointer(void);

char* Create_Fixed_Length_String(uint32_t string_length, char* start);

void Delete_Fixed_Length_String(uint32_t string_length, char* start);