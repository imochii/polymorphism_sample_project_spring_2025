#include "Closet_Monster.h"
#include "Under_Bed_Monster.h"
#include <ctime>
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

/*
 * TODO: Create a vector of Darkness Monster unique pointers and push a variety of ten Closet Monsters and Under Bed Monsters to it.
 *
 * TODO: Tell the user that there are monster eyes staring at them from the darkness!
 *
 * TODO: Repeatedly give the user the option to poke the eyes or run away.
 *     - If they choose to poke the eyes, loop through the vector and call the poke_eye and scare method on each monster. Output the scare method return values to the console.
 *         - Note: the calls to poke_eye are NOT polymorphism.
 *         - Note: the calls to scare are polymorphism.
 *     - If they choose to run away, the program ends.
 */

int main()
{
    char choice;
    vector<unique_ptr<Darkness_Monster>> vecOfEdgyMonsters(10);

    for (int i=0; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            Closet_Monster countSweaters = Closet_Monster();
            vecOfEdgyMonsters.push_back(unique_ptr<Closet_Monster>());
        }
        else
        {
            Under_Bed_Monster misterDustbunny = Under_Bed_Monster();
            vecOfEdgyMonsters.push_back(unique_ptr<Under_Bed_Monster>());
        }
    }

    cout << "...oh no...are those...EYES???" << endl;
    cout << "WHAT DO WE DO???? I'M TOO YOUNG TO PERISH!!--QUICK, MAYBE YOU CAN POKE THEM AWAY!!" << endl;

    cout << "What will you do? Choose wisely...(a) to go poke some monsters, or (b) to be sane and run away (!!!)..." << endl;
    cin >> choice;

    while ((choice != 'a') && (choice != 'b'))
    {
        cout << "Is this a JOKE to you??? Get serious and make a choice!" << endl;
    }

    if (choice == 'a')
    {
        cout << "*sigh*...here we go..." << endl;

        for (int i = 0; i <= 10; i++)
        {
            cout << "AHHH--THIS ONE HAS " << vecOfEdgyMonsters[i]->get_number_of_eyes() << " EYES!!" << endl;
            vecOfEdgyMonsters[i]->poke_eye();
            cout << vecOfEdgyMonsters[i]->scare() << endl;

            if (i == 6)
            {
                cout << " Are you SURE you want to stay?? Just say the char ('b') and we're out of here!" << endl;
                cin >> choice;

                while ((choice != 'a') && (choice != 'b'))
                {
                    cout << "Is this a JOKE to you??? Get serious and make a choice!" << endl;
                }

                if (choice == 'b')
                {
                    cout << "Thank the gods!! Let's go!" << endl;
                    return 0;
                }
            }
        }
    }
    else {
        cout << "A fanTAStically sane choice!! Adios!" << endl;
        return 0;
    }

    return 0;
}

