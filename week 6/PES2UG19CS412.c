#include<stdio.h>
#include<stdlib.h>
void main()
{
 FILE* f;
f = fopen("vbr", "r"); // file descriptor
  
if (f == NULL)
 {
        printf("Unable to open the file, exiting");
	exit(0);
    }

unsigned char c;
int i;
printf("Instruction to jump to Bootstrap program\n");
for(i=0;i<3;i++)
{
c= fgetc(f);
printf("%x ",c);
}

printf("\n");
printf("---------------------------\n");



printf("OEM name/version\n");
for(i=3;i<11;i++)
{
c= fgetc(f);
printf("%c",c);
}
printf("\n");
printf("---------------------------\n");



printf("Number of bytes per sector\n");
for(i=11;i<13;i++)
{
c= fgetc(f);
printf("%x ",c);
}
printf("\n");
printf("---------------------------\n");



printf("Number of sectors per cluster\n");

c= fgetc(f);
printf("%x ",c);

printf("\n");
printf("---------------------------\n");


printf("Number of reserved sectors\n");
for(i=14;i<16;i++)
{
c= fgetc(f);
printf("%x ",c);
}
printf("\n");
printf("---------------------------\n");


printf("Number of FAT copies\n");

c= fgetc(f);
printf("%x ",c);

printf("\n");
printf("---------------------------\n");


printf("Number of root directory entries\n");
for(i=17;i<19;i++)
{
c= fgetc(f);
printf("%x ",c);
}
printf("\n");
printf("---------------------------\n");



printf("Total number of sectors in the filesystem\n");
for(i=19;i<21;i++)
{
c= fgetc(f);
printf("%x ",c);
}
printf("\n");
printf("---------------------------\n");

printf("Media descriptor type\n");

c= fgetc(f);
printf("%x ",c);

printf("\n");
printf("---------------------------\n");



printf("Number of sectors per FAT\n");
for(i=22;i<24;i++)
{
c= fgetc(f);
printf("%x ",c);
}
printf("\n");
printf("---------------------------\n");

printf("Number of sectors per track\n");
for(i=24;i<26;i++)
{
c= fgetc(f);
printf("%x ",c);
}
printf("\n");
printf("---------------------------\n");

printf("Number of heads\n");
for(i=26;i<28;i++)
{
c= fgetc(f);
printf("%x ",c);
}
printf("\n");
printf("---------------------------\n");

printf("Number of hidden sectors\n");
for(i=28;i<30;i++)
{
c= fgetc(f);
printf("%x ",c);
}
printf("\n");
printf("---------------------------\n");



printf("Bootstrap\n");
for(i=30;i<33;i++)
{
c= fgetc(f);
printf("%x ",c);
}
printf("\n");
printf("---------------------------\n");

}

