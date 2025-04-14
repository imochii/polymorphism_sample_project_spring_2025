#include "Closet_Monster.h"
using namespace std;

Closet_Monster::Closet_Monster() : Darkness_Monster(), door_is_open(false) {
}

Closet_Monster::Closet_Monster(int noe) : Darkness_Monster(noe), door_is_open(false) {
}

bool Closet_Monster::open_door()
{
    if (door_is_open)
    {
        return false;
    }
    door_is_open = true;
    return true;
}

bool Closet_Monster::is_open() const
{
    return door_is_open;
}

/**
 * Requires: nothing
 * Modifies: door_is_open
 * Effects: if the door is closed, return "*Knocks on door*"
 *          if the door is open, set the door to be closed and return "*Slams door*"
 */
// TODO: Implement the scare method here
string Closet_Monster::scare()
{
    if (door_is_open)   // door IS open
    {
        door_is_open = false;   // so we close it
        return "*Slams door*";  // and spook
    }

    return "*Knocks on door*";  // door IS NOT open, so be polite, knock
}
