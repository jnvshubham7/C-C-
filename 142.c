#include <stdio.h>
int main ()
{
FILE * fp1 = fopen ( "file1.txt" ,
"r" );
FILE * fp2 = fopen ( "file2.txt" ,
"r+" );
int ch ;
if ( fp1 == NULL )
{
printf ( "File not found" );
}
else // read first file
{
while (( ch = fgetc ( fp1 )) !=
EOF )
{
printf ( "%c" , ch );
}
}
printf ( " \n " );
if ( fp2 == NULL )
{
printf ( "File not found" );
}
else //read second file
{
while (( ch = fgetc ( fp2 )) !=
EOF )
{
printf ( "%c" , ch );
}
}
printf ( " \n " );
}