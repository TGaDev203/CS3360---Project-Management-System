#ifndef GROUPFUNC_H
#define GROUPFUNC_H

#include "../Base/Group.h"

void inputGroupInfo(std::vector<Group*>* groups);
void displayGroupInfo(std::vector<Group*>* groups);
void saveGroupInfo(std::vector<Group*> *groups);
std::vector<Group*>* loadGroupInfo();

#endif