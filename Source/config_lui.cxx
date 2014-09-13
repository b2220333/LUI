// Filename: config_lui.cxx
// Created by:  tobspr (28Aug14)
//
////////////////////////////////////////////////////////////////////

#include "config_lui.h"

#include "pandaSystem.h"
#include "dconfig.h"

// #include "luiRegion.h"


Configure(config_lui);
NotifyCategoryDef(lui, "lui");

ConfigureFn(config_lui) {
  init_lui();
}

void init_lui() {
  static bool initialized = false;
  if (initialized) {
    return;
  }
  initialized = true;

  //LUIInputHandler::init_type();
  // LUIRegion::init_type();

}
