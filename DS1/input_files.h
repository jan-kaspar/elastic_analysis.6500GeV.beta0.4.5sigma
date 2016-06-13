#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

std::string input_ntuple_name;

void InitInputFiles()
{
	input_ntuple_name = "TotemNtuple";

	input_files.clear();

	// 2016_04_20_fill4828

	std::string prefix = "root://eostotem.cern.ch//eos/totem/user/j/jkaspar/reco/alignment_sr/";

	input_files.push_back(prefix + "10077_EVB11_1_ntuple.root");
	input_files.push_back(prefix + "10079_EVB11_1_ntuple.root");
	input_files.push_back(prefix + "10080_EVB11_1_ntuple.root");
	input_files.push_back(prefix + "10081_EVB11_1_ntuple.root");
	input_files.push_back(prefix + "10082_EVB11_1_ntuple.root");
}
