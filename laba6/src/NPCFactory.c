#include "NPCFactory.h"
#include "NPC.h"

NPC* create_NPC(NPCType type, const char* name, int x, int y) {
    switch (type) {
        case KNIGHT:
            return create_knight(name, x, y);
        case SQUIRREL:
            return create_squirrel(name, x, y);
        case PEGASUS:
            return create_pegasus(name, x, y);
        default:
            return NULL;
    }
}
