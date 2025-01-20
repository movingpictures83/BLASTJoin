#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "BLASTJoinPlugin.h"

void BLASTJoinPlugin::input(std::string file) {
   readParameterFile(file);
}

void BLASTJoinPlugin::run() {}

void BLASTJoinPlugin::output(std::string file) {
       	std::string outputfile = file;

//join --header -t$'\t' TopHitBLAST.txt MostFrequentBLAST.txt > testData_sidrBlast.txt
	std::string myCommand = "join --header -t$'\\t' "+PluginManager::addPrefix(myParameters["file1"])+" "+PluginManager::addPrefix(myParameters["file2"])+" > "+file;
 std::cout << myCommand << std::endl;
system(myCommand.c_str());
}

PluginProxy<BLASTJoinPlugin> BLASTJoinPluginProxy = PluginProxy<BLASTJoinPlugin>("BLASTJoin", PluginManager::getInstance());
