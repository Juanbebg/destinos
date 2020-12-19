/////////////////////////////////////////////////////////
/// Programa de cálculo de destinos CEJA ////////////////





#include <stdio.h>

#include <stdlib.h>
int main(void) {
FILE *fp = fopen("lorem.txt", "r");
if(fp == NULL) {
perror("Unable to open file!");
exit(1);
}
char chunk[128];
while(fgets(chunk, sizeof(chunk), fp) != NULL) {
fputs("|*\n", stdout);  // marker string used to show where the content of the chunk array has ended
}

fclose(fp);
}






void main (void)

{


}


