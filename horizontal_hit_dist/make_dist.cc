#include "TFile.h"
#include "TChain.h"

int make_dist()
{
	TChain *ch = new TChain("TotemNtuple");
	ch->Add("root://eostotem.cern.ch//eos/totem/user/j/jkaspar/reco/alignment_sr/10077_EVB11_1_ntuple.root");

	TFile *f_out = TFile::Open("make_dist.root", "recreate");

	ch->Draw("track_rp_2.y : track_rp_2.x >> hit_dist_2(100, 0, 50, 100, -30., +30)", "track_rp_2.valid");
	gDirectory->Get("hit_dist_2")->Write();

	ch->Draw("track_rp_3.y : track_rp_3.x >> hit_dist_3(100, 0, 50, 100, -30., +30)", "track_rp_3.valid");
	gDirectory->Get("hit_dist_3")->Write();

	ch->Draw("track_rp_102.y : track_rp_102.x >> hit_dist_102(100, 0, 50, 100, -30., +30)", "track_rp_102.valid");
	gDirectory->Get("hit_dist_102")->Write();

	ch->Draw("track_rp_103.y : track_rp_103.x >> hit_dist_103(100, 0, 50, 100, -30., +30)", "track_rp_103.valid");
	gDirectory->Get("hit_dist_103")->Write();

	delete f_out;
	return 0;
}
