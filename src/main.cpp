// Please have more than one function. At least one of them passing a value by reference :)
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int Monsterattack(int& playerHp,int monsterattack);
int Playerattack(int& monsterHp,int playerattack, int monsterattack);

int main (){
    bool playing=true;
    int playerHp=100;
    int monsterHp=120;
    int playerchoose=0;

    while (playing){
        cout<<"Player HP: "<<playerHp<<endl;
        cout<<"Monster HP: "<<monsterHp<<endl;
        
        cout<<"Choose an action\n";
        cout<<"1. Attack\n";
        cout<<"2. Heal\n";
        cout<<"3.Quit\n";
        cin>>playerchoose;
        
        int playerattack=0;
        int heal=0;
        int monsterattack=0;
        int playerHeal=0;
        
        if (playerchoose==1){ 
                Monsterattack( playerHp, monsterattack);
                Playerattack( monsterHp, playerattack,  monsterattack);
        }      
        else if (playerchoose==2){

                playerHeal=rand()%16;
                playerHp=playerHp+playerHeal;
                
                
                cout<<"The heal yourself for "<<playerHeal<<" HP!\n";
                Monsterattack( playerHp, monsterattack);
        }     
        else if (playerchoose==3){
                break;
         }
        else{
                cout<<"Input error\n";
                continue;
        }
        if (playerHp<=0){
            cout<<"You lose!\n";
            break;
        }
        else if (monsterHp<=0){
            cout<<"You Win!\n";
            break;
        }
    }
    }



int Monsterattack(int& playerHp,int monsterattack){
    monsterattack=rand()%16;
    playerHp=playerHp - monsterattack;
    cout<<"The Monster attack you for "<<monsterattack<<" damage!\n";
    return playerHp;
    
}
int Playerattack(int& monsterHp,int playerattack, int monsterattack){
    playerattack=rand()%16;
    monsterHp=monsterHp - playerattack;
    cout<<"You attack the monster for "<<playerattack<<" damage!\n";
    return monsterHp;
}