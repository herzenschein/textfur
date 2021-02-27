#ifndef ANIMALQUEST_H
#define ANIMALQUEST_H

class AnimalQuest
{
public:
    AnimalQuest();
    static void beginning();
    static void middle();
    static void end();
    bool isBeginningDone;
    bool isMiddleDone;
    bool isEndDone;
};


class CatQuest : public AnimalQuest
{
    //todo
};


#endif // ANIMALQUEST_H
