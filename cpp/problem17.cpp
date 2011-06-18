#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

#define uint unsigned int

int main(int argc, char* argv[])
{
	uint onetonine = strlen("onetwothreefourfivesixseveneightnine");
	uint onetoten = onetonine + strlen("ten");
	uint teens = strlen("eleventwelvethirteenfourteenfifteensixteenseventeeneighteennineteen");
	uint twenties = strlen("twenty")*10 + onetonine;
	uint thirties = strlen("thirty")*10 + onetonine;
	uint forties = strlen("forty")*10 + onetonine;
	uint fifties = strlen("fifty")*10 + onetonine;
	uint sixties = strlen("sixty")*10 + onetonine;
	uint seventies = strlen("seventy")*10 + onetonine;
	uint eighties = strlen("eighty")*10 + onetonine;
	uint nineties = strlen("ninety")*10 + onetonine;

	uint hundred = onetoten + teens + twenties + thirties + forties + fifties + sixties + seventies + eighties + nineties;

	uint hundredonly = strlen("hundred");
	uint hundredand = strlen("hundredand");
	uint thousand = strlen("onethousand");

	uint answer = hundred * 10 + onetonine * 100 + hundredonly * 9 + hundredand * 891 + thousand;

	printf("%u\n", answer);

	return 0;
}

