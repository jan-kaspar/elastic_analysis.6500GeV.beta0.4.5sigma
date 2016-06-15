import root;
import pad_layout;

NewPad("$x\ung{mm}$", "$y\ung{mm}$", axesAbove=true);
scale(Linear, Linear, Log);
draw(RootGetObject("make_dist.root", "hit_dist_2"));
limits((0, -25), (50, 25), Crop);

yaxis(XEquals(9., false), magenta+2pt);
