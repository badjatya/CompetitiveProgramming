#include <stdio.h>

int main() {
   FILE *fp;
    int rawsz;
   fp = fopen("test.txt", "w+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
    fseek(fp, 0L, SEEK_END);
    rawsz = ftell(fp);
    printf("%d", rawsz);
   fclose(fp);
   return 0;
}