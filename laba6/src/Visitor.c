#include "Visitor.h"
#include "NPC.h"
#include <stdio.h>

void combat_round(NPC* npc1, NPC* npc2, int range) {
    if (is_within_range(npc1, npc2, range)) {
        npc1->fight(npc2);
        npc2->fight(npc1);
    }
}
