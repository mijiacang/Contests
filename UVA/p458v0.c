/*******************************************************************************
*    Cristian Alexandrescu                                                     *
*    2163013577ba2bc237f22b3f4d006856                                          *
*    11a4bb2c77aca6a9927b85f259d9af10db791ce5cf884bb31e7f7a889d4fb385          *
*    bc9a53289baf23d369484f5343ed5d6c                                          *
*******************************************************************************/

/*   Problem 458 - The Decoder                                                */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char *p, szLine[1024];

	/* freopen("input/458.txt", "rt", stdin); */

	while (gets(szLine)) {
		for (p = szLine; *p; p++)
			*p -= 7;

		puts(szLine);
	}	

	return 0;
}
