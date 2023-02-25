#include<stdio.h>
#include<string.h>
#include<math.h>

int power(int, int);
int xatoi(char *);
int xstrlen(char *);
int srtCount(char *, char);

int xstrcmp(char *, char *);
int xstrncmp(char *, char *, int);

char * xstrcat1(char *, char *);
char * xstrncat(char *, char *, int);

char * xstrcpy(char *, char *);
char * xstrncpy(char *, char *, int);

char * xstrstr(char *, char *);
char * xstrchr(char *, char);

char * reverse(char *);
char * removeSpaces(char *);
char * removeChar(char *, char);

int main(){
    
    

    char str1[25] = "akash dshh ddgf ihvd ";

    
    
    // char str3[20] = "12356";
    // printf("%s\n", str1);
    // char * strp = " akashh";

    printf("%s\n", xstrncat(str1,"ghfffdffgdddffg", 4));

    //printf("%s\n", reverse(str1));
    //printf("%d\n", xatoi(str1));
    //printf("%d\n", xstrlen(str1));

    // char str2[20] = "akashhd hhs"

    // scanf("%[^\n]s", str1);
    // printf("%s\n", str1);
    // printf("%d\n",strcmp(str2, str1));
    // xstrcat1(str1, str2);
    // puts(str1);
    // xstrcpy(str1, str2);
    // puts(str2);

}

int power(int num, int idx){

    int pow = 1;

    while(idx>0){

        pow = num*pow;
        idx--;

    }

}

int xatoi(char * str){

    int num = 0, number = 0;
    int i = 0;
    int len = xstrlen(str);
    int multiplier = power(10, len-1);

    for(int asci = 48; str[i] != 0; asci++, num++){
        
        if(str[i] == asci){   // comparing asci values for digits

            number = number + (num * multiplier); // multipling and adding it to previos one;
            multiplier = multiplier/10 ;  // decrimenting to next digits value.
            i++;
            num = 0;
            asci = 48;   // again asi to zero so next will coparing from 0 again.

        }
        
    }

    return number;
}

int xstrlen(char *str){
    int i = 0;
    while(str[i]){
        i++;
    }

    return i;
}

int strCount(char * str, char ch){
    int count = 0;
    int i;
    while (str[i]){

        if(str[i] == ch){

            count++;

        }
    }
    
    return count;

}


char * xstrcat1(char *str1, char *str2){
    int i1;
    int i2 = 0;
    
    i1 = xstrlen(str1);

    while(str2[i2]){
        
            str1[i1] = str2[i2];
            i2++;
            i1++; 

    }

    str1[i1] = 0;

    return str1;
}

char * xstrncat(char * str1, char * str2, int num){

    int i = xstrlen(str1), j = 0;

    for ( ;str2[j] , j < num;i++, j++){

        str1[i] = str2 [j];

    }
    str1[i] = 0;

    return str1;
}


char * xstrcpy(char * str1, char * str2){

    int i = 0;

    while(str1[i]){

        str1[i] = str2[i] ;
        i++;

    }

    str1[i] = 0;

    return str1;
} 

char * xstrncpy(char * str1, char *str2, int num){
    int i = 0;
    while(str1[i] && i<num){

        str1[i] = str2[i];
        i++;
    }

    str1[xstrlen(str1)] = 0;

    return str1;
}


char * reverse(char * str){
    int  i;
    int len = xstrlen(str);
    len = len - 1;

    for ( i = 0 ; i < len; i++, len--){

        char temp;
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;

    }
    
    return str;
}

char * removeSpaces(char *str){
    int i, j;

    for ( i = 0; str[i]; i++){

        if(str[i] == ' '){

            j = i;     

            for(;str[j];j++){

                str[j] = str[j+1];
            
            }
            
            --i;
        }
    }
        str[i] = 0;

    return str;
}

char * removeChar(char *str, char ch){
    int i, j;

    for ( i = 0; str[i]; i++){
        
        if(str[i] == ch){

            j = i;     

            for(;str[j];j++){

                str[j] = str[j+1];

            }

            --i;
        }
    }

        str[i] = 0;

    return str;
}


int xstrcmp(char *str1, char *str2){

    int i = 0;

    for ( ;str1[i] == str2[i]; i++){

        if(str1[i] == 0){
            return 0;
        }
    }

    return str1[i] - str2[i];

}

int xstrncmp(char * str1, char * str2, int num){
    int i = 0;
    while ((str1[i] == str2[i] ) &&  (i != num)){

        if(str2[i] == 0){
            return 0;
        }    
        i++;
    }
    
    return str1[i] - str2[i];
}


char * xstrstr(char * str1, char * str2){

    int i = 0, j = 0;

    while(str2[j]){

        if(str1[i] == str2[j]){
            j++;

        } 
        i++;
    }



}

char * xstrchr(char * str, char ch){
    int i = 0, j =0;

    char * str2;

    
    while(str[i]){
        if(str[i] == ch){
            break;
        }
        i++;
    }

    while (str[i]){
       str2[j] = str [i];
       j++;
       i++;
    }

    str2[j] = 0;
    
    return str2;
}


