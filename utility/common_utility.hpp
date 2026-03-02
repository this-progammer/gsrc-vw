/*
*  *common_utility.hpp*
*/
#pragma once 

#define COMMON_UTILITY

#include <string>

class Utility{
public:

  Utility();
  virtual ~Utility();

  const char * _utilityName(Utility*)const;

  enum UtilityType{
    MODEL_UTILITY = 0,
    BRUSH_UTILITY = 1,
    SCRIPT_UTILITY = 2,
    FX_UTILITY = 3
  };

  bool script_on(Utility);

  std::string * UTILITY_SOURCE_BIN;
  void CreateFx(Utility FX, int xpos, int ypos, int zpos, const char * name, Utility type);
  void ApplyFx(Utility&);
  std::string FX_UTIL_NAME;

};
