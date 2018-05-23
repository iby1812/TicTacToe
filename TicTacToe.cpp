#include "TicTacToe.h"

void TicTacToe::play(Player& xPlayer, Player& oPlayer)
{
    w = nullptr;
    xPlayer.setChar('X');
    oPlayer.setChar('O');
    gboard = '.';
    
    

    for(int i = 0; i < gboard.size(); i++)
    {
        
        tryPlay(xPlayer, oPlayer);
        if(w) break;
        tryPlay(oPlayer,xPlayer);
        if(w) break;
    }
    if(w==nullptr)w=&oPlayer;

}


