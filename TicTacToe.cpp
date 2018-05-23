#include "TicTacToe.h"

void TicTacToe::play(Player& xPlayer, Player& oPlayer)
{
    w = nullptr;
    xPlayer.setChar('X');
    oPlayer.setChar('O');
    gboard = '.';
    
    int size = (gboard.size()) * (gboard.size());

    for(int i = 0; i < size; i++)
    {
        
        tryPlay(xPlayer, oPlayer);
        if(w) break;
        tryPlay(oPlayer,xPlayer);
        if(w) break;
    }
    if(w==nullptr)w=&oPlayer;

}


