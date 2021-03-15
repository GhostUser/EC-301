#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch;
    FILE *f1, *f2;
    f1 = fopen("in.txt", "r");
    f2 = fopen("out.txt", "w");
    if (f1==NULL || f2==NULL){
        printf("File doesn't exist.\n");
        exit(0);
    }

    while (1){
        ch = fgetc(f1);
        if (ch == EOF){
            break;
        }
        else{
            if (ch <= 122 && ch >= 97){
                ch = ch-32;
                fputc(ch, f2);
            }else{
                fputc(ch, f2);
            }
        } 
    }
    printf("File succesfully copied.");
    fclose(f1); 
    fclose(f2); 
    return 0;
}



