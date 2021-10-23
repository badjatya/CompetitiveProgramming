    #include<stdio.h>  
    void main( )  
    {  
        FILE *fp ;  
        char ch ;  
        int i;
        fp = fopen("videotest.raw","r") ;  
        i=0;
        while ( i<10 )  
        {  i++;
            ch = fgetc ( fp ) ;  
            printf("%c",ch) ; 
            if (feof(fp))
                break;

        } 
        fclose (fp ) ;  
    }  