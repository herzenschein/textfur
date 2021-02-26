#include "comfort.h"
#include "furvars.h"
#include "endgame.h"

void comfyFunction()
{
    if (comfyVar < (30))
    {
        comfyString.assign("uneasy");
    }
    else if (comfyVar > 70 && comfyVar < 100)
    {
        comfyString.assign("cheerful");
    }
    else if (comfyVar == 0)
    {
        endGame();
    }
    else if (comfyVar == 100)
    {
        comfyString.assign("like it were your little piece of heaven");
    }
    else if (comfyVar == 50)
    {
        comfyString.assign("comfortable");
    }
    else if (comfyVar > 100)
    {
        comfyVar = 100;
    }
    else
    {
        comfyString.assign("different");
    }
}
