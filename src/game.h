#pragma once

#include "music.h"
#include <raylib.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <raymath.h>

typedef uint32_t worldtime_t;

typedef struct {
	worldtime_t time; // world time (measured in second)
	
	// will change this to an uint32_t flag if it gets bigger
	bool isNight;
} World;

void initWorld();
void updateWorld();
World* getWorldPointer();
World getWorld();
worldtime_t getWorldTime();

void drawGame();
void updatePlayerCamera(Camera3D* c);
