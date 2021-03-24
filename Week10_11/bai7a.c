#include <stdio.h>
#include <stdlib.h>

int main() {
	const char* env = getenv("PATH");
	if (env == NULL) printf("null");
	printf("PATH: %s\n", env);
	setenv("PATH", "usr/local/bin/LA", 1);
	const char* new_env = getenv("PATH");
	printf("New path: %s\n", new_env);
	return 0;
}

/**
/ Reference
/ http://www0.cs.ucl.ac.uk/staff/W.Langdon/getenv/
/ https://www.ibm.com/support/knowledgecenter/SSLTBW_2.4.0/com.ibm.zos.v2r4.bpxbd00/setenv.htm
**/
