// develop a c program to copy the content of one text file into another text file

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *source_file, *dest_file;
    char ch;

    source_file = fopen("bio.txt", "r");

    if (source_file == NULL)
    {
        perror("File not exist !!!!");
        return 1;
    }
    else
    {
        dest_file = fopen("F1.txt", "a");
        if (dest_file == NULL)
        {
            perror("File not exist !!!!");
            return 1;
        }
        else
        {
            // CONTENT COPY
            ch = fgetc(source_file);
            while (ch != EOF)
            {
                fputc(ch, dest_file);
                ch = fgetc(source_file);
            }
        }

        printf("Content copy done !!!!1");
        fclose(source_file);
        fclose(dest_file);
    }

    return 0;
}