#include "bataille.h"

using std::make_shared;
using std::shared_ptr;

std::shared_ptr<CompteRendu> Bataille::Executer()
{
    shared_ptr<CompteRendu> cr = make_shared<CompteRendu>();

    // exécution de la bataille...

    // tmp :
    cr->m_Scenes.push_back(make_shared<Scene>());
    cr->m_Scenes.push_back(make_shared<Scene>());
    cr->m_Scenes.push_back(make_shared<Scene>());
    // end tmp

    return cr;
}
