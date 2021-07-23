#include <iostream>
#include "sculptor.hpp"

///@brief create a disk
int main() {

    Sculptor ednaldo(100,100,100);
    //cabeça
    ednaldo.setColor(156,98,78,1);
    ednaldo.putSphere(85,95,75,5);

    //olhos
    ednaldo.setColor(15,13,14,1);
    ednaldo.putBox(83,85,95,97,79,80);
    ednaldo.putBox(86,88,95,97,79,80);

    //oculos
    ednaldo.putVoxel(85,96,79);
    ednaldo.putVoxel(82,96,79);
    ednaldo.putVoxel(88,96,79);
    for(int z = 78; z>=75; z--){
        ednaldo.putVoxel(81,96,z);
        ednaldo.putVoxel(89,96,z);
    }
    

    //boca
    ednaldo.setColor(99,61,53,1);
    ednaldo.putBox(84,87,93,94,79,80);

    //cabelo
    ednaldo.setColor(55,50,47,1);
    for(int x = 81;x<=89;x++){
        for(int z = 71;z<=79;z++){
            if(x == 81 || x == 89){
                ednaldo.putVoxel(x,97,z);
            }else if (x == 82 || x == 88){
                ednaldo.putVoxel(x,98,z);
            }else
                ednaldo.putVoxel(x,99,z);
        }      
    }
    //pescoço
    ednaldo.setColor(156,98,78,1);
    ednaldo.putBox(84,87,89,91,74,77);

    //barriga com camisa
    ednaldo.setColor(200,50,30,1);
    ednaldo.putEllipsoid(85,85,75,5,5,7);
    ednaldo.putEllipsoid(85,80,75,6,5,7);

    //braços
    for(int x = 75;x<81;x++){
        for(int y = 86;y<=87;y++){
            for(int z = 74;z<=76;z++){
                if(x>=78 && x<=80){
                    ednaldo.setColor(200,50,30,1);
                }else{
                    ednaldo.setColor(156,98,78,1);
                }
                ednaldo.putVoxel(x,y,z);
            }  
        }
    }
    for(int x = 90;x<96;x++){
        for(int y = 86;y<=87;y++){
            for(int z = 74;z<=76;z++){
                if(x>=90 && x<=92){
                    ednaldo.setColor(200,50,30,1);
                }else{
                    ednaldo.setColor(156,98,78,1);
                }
                ednaldo.putVoxel(x,y,z);
            }  
        }
    }
    
    for(int x = 75;x<77;x++){
        int c = 0;
        for(int y = 88;y<=96;y = y + 2){
            for(int z = 74;z<=76;z++){
                if(y == 94){
                    ednaldo.setColor(55,50,47,1);  
                }else{
                    ednaldo.setColor(156,98,78,1);
                }
                if(y != 96){
                    if(y != 94){
                        ednaldo.putVoxel(x+c,y,z);
                        ednaldo.putVoxel(x+c,y+1,z);
                    }else{
                        ednaldo.setColor(156,98,78,1);
                        ednaldo.putVoxel(x+c,y,z);
                        ednaldo.setColor(55,50,47,1); 
                        ednaldo.putVoxel(x+c,y+1,z);
                    }
                        
                }else{
                    ednaldo.putVoxel(x+c,y,z);
                }
                
            }  
            c++;
        }
    }
    
    for(int x = 94;x<96;x++){
        int c = 0;
        for(int y = 88;y<=96;y = y + 2){
            for(int z = 74;z<=76;z++){
                ednaldo.setColor(156,98,78,1);
                ednaldo.putVoxel(x-c,y,z);
                if(y != 96){
                    ednaldo.putVoxel(x-c,y,z);
                    ednaldo.putVoxel(x-c,y+1,z);    
                }else{
                    ednaldo.putVoxel(x-c,y,z);
                }
            }  
            c++;
        }
    }

    //pernas
    ednaldo.setColor(150,180,200,1);
    ednaldo.putBox(83,85,65,76,74,77);
    ednaldo.putBox(86,88,65,76,74,77);

    //sapatos
    ednaldo.setColor(55,50,47,1);
    ednaldo.putBox(83,85,63,65,74,80);  
    ednaldo.putBox(86,88,63,65,74,80);  

    

    ednaldo.writeOFF((char*)"ednaldo.off");

    return 0;
}