#include <stdio.h>
#include <string.h>

int strncmp( const char * str1, const char * str2, size_t liczba )
{
    char str1[] = "abc";
    char str2[] = "abc";

    if( strncmp( str1, str2, 3 ) == 0 )
         printf( "Badane wycinki lancuchow znakow sa rowne.\n" );
    else
         printf( "Badane wycinki lancuchow znakow nie sa rowne.\n" );

    return 0;
}

int main()
{
    strncmp(const char *,const char *,size_t);
    return 0;
}
