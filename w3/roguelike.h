#pragma once

#include <flecs.h>
#include <algorithm>

void init_roguelike(flecs::world &ecs);
void process_turn(flecs::world &ecs);
void print_stats(flecs::world &ecs);
