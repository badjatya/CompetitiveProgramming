    #include<stdio.h>  
    #include<string.h> 
    int main()  
    {  
        FILE *fp ;  
        FILE *fpt ;
        long int i=0;
        char raw[10], temp[10], filepath[10], filestr[200], exten[5];
        char buf[12];
        start:
        i=i+1;
        strcpy(raw , "raw");  
        snprintf(buf, 12, "raw_%li", i);
        strcpy(filestr , "capture -d 1 -m -1 -p 0 -s 16 -n 100 pipe:1  "); 
        strcpy(exten , ".raw");  
        strcpy(filepath , buf); 
        strcpy(filepath , strcat(filepath, exten));
        strcpy(filestr , strcat(filestr, filepath));
        (void)system(filestr);
        goto start;
        return 0; 
    }  