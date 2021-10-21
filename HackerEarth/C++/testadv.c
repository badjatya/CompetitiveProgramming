    #include<stdio.h>  
    #include<string.h> 
    void main()  
    {  
        FILE *fp ;  
        FILE *fpt ;
        char raw[10], temp[10], filepath[10];
        unsigned long int rawsz, tempsz;
        strcpy(raw , "rawv.raw");  
        strcpy(temp , "temp.raw");  
        strcpy(filepath , raw);
        fp = fopen(raw,"w");
        fpt = fopen(temp,"w");  
        while (1)  
        { 
            start:
            (void)system(strcat("capture -d 1 -m -1 -p 0 -s 16 -n 100 -v /home/rtpl/Desktop/fifo/",filepath));
            fseek(fp, 0L, SEEK_END);
            rawsz = ftell(fp);
            fseek(fp, 0L, SEEK_END);
            tempsz = ftell(fp);
            if(rawsz == 1073741824)
            {
                fopen(raw,"w");
                strcpy(filepath , temp);  
                goto start; 
            }else if(tempsz == 1073741824)
            {
                fopen(temp,"w");
                strcpy(filepath , temp); 
                goto start; 
            }
        }  
    }  