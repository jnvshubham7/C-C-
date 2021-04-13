#include <stdio.h>
int main ()
{
FILE * fp = fopen ( "write.txt" ,
"w+" );
// input text to write
fprintf ( fp , "%s %s %s
%s" , "Hello!!!" , "we " , "are" , "Shubham
and Avishkar" );
printf ( "The File Is Ready " );
fclose ( fp );
}