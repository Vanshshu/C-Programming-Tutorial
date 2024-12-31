#include<stdio.h>
int main(){
    struct pokemon
    {
        int hp;
        int speed;
        int attack;
    };
    struct pokemon pikachu;
    pikachu.attack=60;
    pikachu.hp=50;
    pikachu.speed=100;
   
    struct pokemon chizard;
chizard.attack=89;
    chizard.hp=40;
    chizard.speed=1003;
   
   printf("%d",chizard.attack);
    
    
}