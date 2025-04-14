#include "Under_Bed_Monster.h"
using namespace std;

Under_Bed_Monster::Under_Bed_Monster() : Darkness_Monster() {
}

Under_Bed_Monster::Under_Bed_Monster(int noe) : Darkness_Monster(noe) {
}

/**
 * Requires: nothing
 * Modifies: nothing
 * Effects: randomly returns either "*Grabs you*" or "*[number_of_eyes] eyes watching you*" ORRRR "AHHHHHH--oh, YOU scared me >:/".
 */
// TODO: implement the scare method here
string Under_Bed_Monster::scare()
{
    int random_number = rand() % (3 - 1) + 0;   // get our random element

    if (random_number == 1 )    // random door #1
    {
        return "*Grabs you*";
    }
    else if (random_number == 2)    // random door #2
    {
        return "*[number_of_eyes] eyes watching you*";
    }

    return "[secret third option]"      // SECRET THIRD RANDOM DOOR
           "AHHHHHH--oh, YOU scared me >:/"
           "*retreats into darkness*";
}