// General Deps
#include "comfort.h"
#include "furvars.h"

void comfyFunction()
{
    if (comfyVar < (30))
    {
        comfyString = "uneasy";
    }
    else if (comfyVar > 70 && comfyVar < 100)
    {
        comfyString = "cheerful";
    }
    else if (comfyVar == 0)
    {
        comfyString = "non-existent";
    }
    else if (comfyVar == 100)
    {
        comfyString = "like it were your little piece of heaven";
    }
    else if (comfyVar == 50)
    {
        comfyString = "comfortable";
    }
    else if (comfyVar > 100)
    {
        comfyVar = 100;
    }
    else
    {
        comfyString = "different";
    }
}
