#include <stdio.h>

void main(){
    float red,green,blue;
    float white,cyan,magenta,yellow,black;
    printf("Enter value of red (0 to 255):");
    scanf("%f",&red);
    printf("Enter value of green (0 to 255):");
    scanf("%f",&green);
    printf("Enter value of blue (0 to 255):");
    scanf("%f",&blue);
    if(red==0 && blue==0 && green==0){
        cyan=0;
        yellow=0;
        magenta=0;
        black=1;
        white=0;
    }
    else{
        if(red>=blue){
            if(red>=green){
                white=red/255;
            }else if (green>=blue){
                white=green/255;
            }
        }
        else if(blue>=red){
            if(blue>=green){
                white=blue/255;
            }else if(green>=blue){
                white=green/255;
            }
        }
        cyan=(white-red/255)/white;
        magenta=(white-green/255)/white;
        yellow=(white-blue/255)/white;
        black=(1-white);
    }
    printf("c:%f,m:%f,y:%f,k:%f",cyan,magenta,yellow,black);

}