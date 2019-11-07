#include "register_types.h"

#include "core/class_db.h"
#include "libluna.bulletml.h"

void register_lunabulletml_types() {
    ClassDB::register_class<LunaBulletml>();
}

void unregister_lunabulletml_types() {
   // Nothing to do here in this example.
}
