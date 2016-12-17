#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

std::string input_ntuple_name;

void InitInputFiles()
{
	input_ntuple_name = "TotemNtuple";

	input_files.clear();

	// calibration run after TS2:
	//   2016_04_20_fill4828

	std::string prefix = "root://eostotem.cern.ch//eos/totem/user/j/jkaspar/reco/alignment_sr/";

	for (std::string evb : { "EVB11_1", "EVB11_2", "EVB12_1", "EVB12_2", "EVB13_1", "EVB13_2", "EVB14_1", "EVB14_2", "EVB15_1", "EVB15_2" })
	{
		input_files.push_back(prefix + "10077_" + evb + "_ntuple.root");
		input_files.push_back(prefix + "10079_" + evb + "_ntuple.root");
		input_files.push_back(prefix + "10080_" + evb + "_ntuple.root");
		input_files.push_back(prefix + "10081_" + evb + "_ntuple.root");
		input_files.push_back(prefix + "10082_" + evb + "_ntuple.root");
	}
}
