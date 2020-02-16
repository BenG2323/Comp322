#include <stdio.h>
#include <string.h>
#include <math.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, const char * argv[]) {
    int fileopen = open(argv[1], O_RDONLY);
    if(fileopen<0){
        if((argc>2)&&(argv[1][0]=='-')){
            for(int i=2; i<argc; i++){
                int length = strlen(argv[i]);
                if(length>8){
                    goto inputError;
                }
                int ascii=0;
                int parity=0;
                printf("Original\tASCII\t\tDecimal\t\tParity\n--------\t--------\t--------\t--------\n");
                for(int j=0; j<8; j++){
                    if(j>=length){
                        printf("0");
                    }
                    else{
                        printf("%c",argv[i][j]);
                    }
                }
                if(argv[i][0]=='1'){
                    
                }
                else if(argv[i][0]=='0'){
                    
                }
                else{
                    goto inputError;
                }
                for(int j=1; j<length; j++){
                    if(argv[i][j]=='1'){
                        ascii+=pow(2,(8-j-1));
                    }
                    else if(argv[i][j]=='0'){
                        
                    }
                    else{
                        goto inputError;
                    }
                }
                for(int j=0; j<length; j++){
                    if(argv[i][j]=='1'){
                        parity++;
                    }
                }
                parity = parity%2;
                printf("\t");
                switch (ascii) {
                    case 0:
                        printf("NULL");
                        break;
                    case 1:
                        printf("SOH");
                        break;
                    case 2:
                        printf("STX");
                        break;
                    case 3:
                        printf("ETX");
                        break;
                    case 4:
                        printf("EOT");
                        break;
                    case 5:
                        printf("ENQ");
                        break;
                    case 6:
                        printf("ACK");
                        break;
                    case 7:
                        printf("BEL");
                        break;
                    case 8:
                        printf("BS");
                        break;
                    case 9:
                        printf("HT");
                        break;
                    case 10:
                        printf("LF");
                        break;
                    case 11:
                        printf("VT");
                        break;
                    case 12:
                        printf("FF");
                        break;
                    case 13:
                        printf("CR");
                        break;
                    case 14:
                        printf("SO");
                        break;
                    case 15:
                        printf("SI");
                        break;
                    case 16:
                        printf("DLE");
                        break;
                    case 17:
                        printf("DC1");
                        break;
                    case 18:
                        printf("DC2");
                        break;
                    case 19:
                        printf("DC3");
                        break;
                    case 20:
                        printf("DC4");
                        break;
                    case 21:
                        printf("NAK");
                        break;
                    case 22:
                        printf("SYN");
                        break;
                    case 23:
                        printf("ETB");
                        break;
                    case 24:
                        printf("CAN");
                        break;
                    case 25:
                        printf("EM");
                        break;
                    case 26:
                        printf("SUB");
                        break;
                    case 27:
                        printf("ESC");
                        break;
                    case 28:
                        printf("FS");
                        break;
                    case 29:
                        printf("GS");
                        break;
                    case 30:
                        printf("RS");
                        break;
                    case 31:
                        printf("US");
                        break;
                    case 127:
                        printf("DEL");
                        break;
                    default:
                        printf("%c",ascii);
                        break;
                }
                printf("\t\t%d", ascii);
                printf("\t\t");
                if(parity==0){
                    printf("EVEN");
                }
                else{
                    printf("ODD");
                }
                printf("\n");
            }
        }
        else if((argc>1)&&(argv[1][0]!='-')){
            for(int i=1; i<argc; i++){
                int length = strlen(argv[i]);
                if(length>8){
                    goto inputError;
                }
                int ascii=0;
                int parity=0;
                printf("Original\tASCII\t\tDecimal\t\tParity\n--------\t--------\t--------\t--------\n");
                for(int j=0; j<8; j++){
                    if(j>=length){
                        printf("0");
                    }
                    else{
                        printf("%c",argv[i][j]);
                    }
                }
                if(argv[i][0]=='1'){
                    
                }
                else if(argv[i][0]=='0'){
                    
                }
                else{
                    goto inputError;
                }
                for(int j=1; j<length; j++){
                    if(argv[i][j]=='1'){
                        ascii+=pow(2,(8-j-1));
                    }
                    else if(argv[i][j]=='0'){
                        
                    }
                    else{
                        goto inputError;
                    }
                }
                for(int j=0; j<length; j++){
                    if(argv[i][j]=='1'){
                        parity++;
                    }
                }
                parity = parity%2;
                printf("\t");
                switch (ascii) {
                    case 0:
                        printf("NULL");
                        break;
                    case 1:
                        printf("SOH");
                        break;
                    case 2:
                        printf("STX");
                        break;
                    case 3:
                        printf("ETX");
                        break;
                    case 4:
                        printf("EOT");
                        break;
                    case 5:
                        printf("ENQ");
                        break;
                    case 6:
                        printf("ACK");
                        break;
                    case 7:
                        printf("BEL");
                        break;
                    case 8:
                        printf("BS");
                        break;
                    case 9:
                        printf("HT");
                        break;
                    case 10:
                        printf("LF");
                        break;
                    case 11:
                        printf("VT");
                        break;
                    case 12:
                        printf("FF");
                        break;
                    case 13:
                        printf("CR");
                        break;
                    case 14:
                        printf("SO");
                        break;
                    case 15:
                        printf("SI");
                        break;
                    case 16:
                        printf("DLE");
                        break;
                    case 17:
                        printf("DC1");
                        break;
                    case 18:
                        printf("DC2");
                        break;
                    case 19:
                        printf("DC3");
                        break;
                    case 20:
                        printf("DC4");
                        break;
                    case 21:
                        printf("NAK");
                        break;
                    case 22:
                        printf("SYN");
                        break;
                    case 23:
                        printf("ETB");
                        break;
                    case 24:
                        printf("CAN");
                        break;
                    case 25:
                        printf("EM");
                        break;
                    case 26:
                        printf("SUB");
                        break;
                    case 27:
                        printf("ESC");
                        break;
                    case 28:
                        printf("FS");
                        break;
                    case 29:
                        printf("GS");
                        break;
                    case 30:
                        printf("RS");
                        break;
                    case 31:
                        printf("US");
                        break;
                    case 127:
                        printf("DEL");
                        break;
                    default:
                        printf("%c",ascii);
                        break;
                }
                printf("\t\t%d", ascii);
                printf("\t\t");
                if(parity==0){
                    printf("EVEN");
                }
                else{
                    printf("ODD");
                }
                printf("\n");
            }
        }
        else{
            goto inputError;
        }
    }
    else if(argc==2){
        
        printf("Open: %d\n", fileopen);
        char input[1024];
        char character[8];
        for(int i=0;i<1024;i++){
            input[i]=0;
        }
        for(int i=0;i<8;i++){
            character[i]=0;
        }
        int fileread = read(fileopen, input, 128);
        printf("Read: %d\n", fileread);
        printf("File: %s\n",input);
        int counter=0;
        int characterCounter = 0;
        char in = input[0];
        if(in==0){
            goto inputError;
        }
        printf("Original\tASCII\t\tDecimal\t\tParity\n--------\t--------\t--------\t--------\n");
        while(in!=0){
            in = input[counter];
            //printf("%s\n",character);
            if((in!='1')&&(in!='0')&&(in!=' ')&&(in!=0)){
                goto inputError;
            }
            else{
                if(characterCounter<=8){
                    if((in==' ')||(in==0)){
                        int ascii=0;
                        int parity=0;
                        for(int j=0; j<8; j++){
                            if(j>=characterCounter){
                                printf("0");
                            }
                            else{
                                printf("%c",character[j]);
                            }
                        }
                        for(int j=1; j<8; j++){
                            if(character[j]=='1'){
                                ascii+=pow(2,(8-j-1));
                            }
                        }
                        for(int j=0; j<8; j++){
                            if(character[j]=='1'){
                                parity++;
                            }
                        }
                        parity = parity%2;
                        printf("\t");
                        switch (ascii) {
                            case 0:
                                printf("NULL");
                                break;
                            case 1:
                                printf("SOH");
                                break;
                            case 2:
                                printf("STX");
                                break;
                            case 3:
                                printf("ETX");
                                break;
                            case 4:
                                printf("EOT");
                                break;
                            case 5:
                                printf("ENQ");
                                break;
                            case 6:
                                printf("ACK");
                                break;
                            case 7:
                                printf("BEL");
                                break;
                            case 8:
                                printf("BS");
                                break;
                            case 9:
                                printf("HT");
                                break;
                            case 10:
                                printf("LF");
                                break;
                            case 11:
                                printf("VT");
                                break;
                            case 12:
                                printf("FF");
                                break;
                            case 13:
                                printf("CR");
                                break;
                            case 14:
                                printf("SO");
                                break;
                            case 15:
                                printf("SI");
                                break;
                            case 16:
                                printf("DLE");
                                break;
                            case 17:
                                printf("DC1");
                                break;
                            case 18:
                                printf("DC2");
                                break;
                            case 19:
                                printf("DC3");
                                break;
                            case 20:
                                printf("DC4");
                                break;
                            case 21:
                                printf("NAK");
                                break;
                            case 22:
                                printf("SYN");
                                break;
                            case 23:
                                printf("ETB");
                                break;
                            case 24:
                                printf("CAN");
                                break;
                            case 25:
                                printf("EM");
                                break;
                            case 26:
                                printf("SUB");
                                break;
                            case 27:
                                printf("ESC");
                                break;
                            case 28:
                                printf("FS");
                                break;
                            case 29:
                                printf("GS");
                                break;
                            case 30:
                                printf("RS");
                                break;
                            case 31:
                                printf("US");
                                break;
                            case 127:
                                printf("DEL");
                                break;
                            default:
                                printf("%c",ascii);
                                break;
                        }
                        printf("\t\t%d", ascii);
                        printf("\t\t");
                        if(parity==0){
                            printf("EVEN");
                        }
                        else{
                            printf("ODD");
                        }
                        printf("\n");
                        characterCounter=0;
                    }
                    else if(in=='0'){
                        character[characterCounter]='0';
                        characterCounter++;
                    }
                    else if(in=='1'){
                        character[characterCounter]='1';
                        characterCounter++;
                    }
                }
                else{
                    goto inputError;
                }
            }
            counter++;
        }
    }
    else{
    inputError:
        printf("\nInput Error\n\n");
    }
	return 0;
}
