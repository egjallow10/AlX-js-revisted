/*Mac adress changer*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <errono.h>


typedef unsigned char int8;
typedef unsigned short int int16;
typedef unsigned int int32;
typedef unsigned long int int64;


struct s_mac {
	int64 addr:48;
};


typedef struct s_mac Mac;

Mac generatemac() {
	int64 a, b;
	Mac mac;

	a = (long)random();
	b = (long)random();
	mac.addr = ((a * b) % 281474976710656);
	return mac;
}



int main(int argc, char *argv[]) {
	srand(getpid());
	return 0;
}



