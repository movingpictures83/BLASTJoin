#ifndef BLASTJoinPLUGIN_H
#define BLASTJoinPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include "Tool.h"
#include <string>

class BLASTJoinPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "BLASTJoin";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
